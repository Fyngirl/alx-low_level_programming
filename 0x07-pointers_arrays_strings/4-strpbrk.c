#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - A function that searches a string
 * @s: The string to be located
 * @accept: the string
 * Return: returns a pointer to the byte
 */

char *_strpbrk(char *s, char *accept)
{
	char *p = accept;
	int i;

	while (*s)
	{
		for (i = 0; p[i]; i++)
		{
			if (*s == p[i])
				return (s);
		}
		s++;
	}
	return (NULL);
}
