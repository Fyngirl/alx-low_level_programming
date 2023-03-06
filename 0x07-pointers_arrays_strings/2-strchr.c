#include "main.h"

/**
 * _strchr - a function tha locates character in a string
 * @s: a pointer to the string
 * @c: the character to search for
 * Return: returns s if chracter is found or null if not found
 */

char *_strchr(char *s, char c)
{
	char *p = s;

	while (*p != '\0')
	{
		for (*p == c)
			return (s);
	}
	p++;

	if (*p == c)
	{
		return (s);
	}
	return (NULL);
}
