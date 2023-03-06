#include "main.h"

/**
 * _memset - The function fills the first n bytes of the memory area
 * pointed to by s with the constant byte b
 * @s: pointer to the memory that needs to be filled
 * @b: The constant byte value to fill the memory area with
 * @n: The number of bytes to fill
 * Return: returns a ointer to memory of area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*p++ = b;
	}
	return (s);
}
