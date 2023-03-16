#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - allocates memeory for an array
 * @nmemb: unsigned int
 * @size: unasigned int
 * Return: void
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(nmemb * size);

	if (p == NULL)
		return (NULL);

	memset(p, 0, nmemb * size);

	return (p);
}
