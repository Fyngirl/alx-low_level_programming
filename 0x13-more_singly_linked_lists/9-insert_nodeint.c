#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: a pointer to a pointer to the first node of the listint_t list
 * @idx: the index of the list where the new node should be added.
 * @n: the integer to be stored in the new node
 *
 * Return: if the function fails - NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *temp_node;
	unsigned int i;


	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	temp_node = *head;
	for (i = 0; i < idx - 1; i++)
	{
		if (temp_node == NULL || temp_node == NULL)
		{
			free(new_node);
			return (NULL);
		}
		temp_node = temp_node->next;
	}
	new_node->next = temp_node->next;
	temp_node->next = new_node;

	return (new_node);
}
