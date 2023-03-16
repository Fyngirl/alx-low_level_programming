#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _realloc - reallocates a memeory block using malloc and free
 * @ptr: pointer
 * @old_size: size of the allocated space for ptr
 * @new_size: new size of the new memory block
 * Return: void
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr;
	unsigned int i;
	char *p = ptr;

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		return (malloc(new_size));
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);

	if (new_size > old_size)
		new_size = old_size;
	for (i = 0; i < new_size; i++)
		new_ptr[i] = p[i];

	free(ptr);

	return (new_ptr);
}
