#include "main.h"

/**
 * _strlen - a function that returns the length of a string
 * @s: char to check
 * Return: Always 0
 */

int _strlen(char *s)
{
	int l = 0;

	while (*s != '\0')
	{
		l++;
		s++;
	}
	return (l);
}
