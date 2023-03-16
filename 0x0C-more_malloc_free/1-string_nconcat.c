#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first char
 * @s2: second char
 * @n: unsigned int
 * Return: returns NULL if fails
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int x, y, z;
	char *result;

	if (s1 == NULL)
	{
		x = 0;
	}
	else
	{
		for (x = 0; s1[x]; ++x)
			;
	}
	if (s2 == NULL)
	{
		y = 0;
	}
	else
	{
		for (y = 0; s2[y]; ++y)
			;
	}
	if (y > n)
		y = n;
	result = malloc(sizeof(char) * (x + y + 1));
	if (result == NULL)
		return (NULL);
	for (z = 0; z < x; z++)
		result[z] = s1[z];
	for (z = 0; z < y; z++)
		result[z + x] = s2[z];
	result[x + y] = '\0';
	return (result);
}
