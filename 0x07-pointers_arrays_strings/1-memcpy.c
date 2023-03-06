#include "main.h"

/**
 * _memcpy - Function that copies n bytes from one memory to another
 * @dest: pointer to the destination memory area
 * @src: pointer to the source memory area
 * @n: Number of bytes to copy
 * Return: a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *p = dest;
	char *j = src;
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*p++ = *j++;
	}
	return (dest);
}
