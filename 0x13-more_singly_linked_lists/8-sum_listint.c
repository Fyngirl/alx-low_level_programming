#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint - caculates the sum of all the data in a linked list
 * @head: pointer to the head node of a linked list
 *
 * Return: The sum of all the data in the list, or 0 if the list is empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;


	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
