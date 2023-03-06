#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring
 * @s: char to be searched
 * @accept: char to be matched against
 * Return: returns number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	char *p = accept;
	unsigned int len = 0;
	int i;

	while (*s)
	{
		i = 0;

		for (; *p; p++)
			if (*s == *p)
			{
				i = 1;
				break;
			}
	if (!i)
	{
		break;
	}
	len++;
	s++;
	}
	return (len);
}
