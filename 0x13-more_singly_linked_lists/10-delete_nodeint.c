#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index of a
 * listint_t linked list
 * @head: pointer to pointer to head node
 * @index: index of the node to delete
 *
 * Return: 1 on success, -1 on failure
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *temp;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	current = *head;

	for (i = 0; current != NULL && i < index - 1; i++)
	{
		current = current->next;
	}


	if (current == NULL || current->next == NULL)
	{
		return (-1);
	}

	temp = current->next;
	current->next = temp->next;
	free(temp);

	return (1);
}
