#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - fress a listint_t list
 * @head: pointer to the first node in the list
 */
void free_listint(listint_t *head)
{
	listint_t *current;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current);
	}
}
