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

		for (i = 0; p[i]; i++)
		{
			if (*s == p[i])
			{
				len++;
				break;
			}
			else if (p[i + 1] == '\0')
				return (len);
		}
	s++;
	}
	return (len);
}
