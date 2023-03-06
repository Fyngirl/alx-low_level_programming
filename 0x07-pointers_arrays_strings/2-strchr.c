#include "main.h"
#include <stddef.h>

/**
 * _strchr - a function tha locates character in a string
 * @s: a pointer to the string
 * @c: the character to search for
 * Return: returns s if chracter is found or null if not found
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}

	if (c == '\0')
	{
		return (s);
	}
	return (NULL);
}
