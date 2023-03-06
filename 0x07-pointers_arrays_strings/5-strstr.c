#include "main.h"
#include <stdio.h>

/**
 * _strstr - the function locates a substring
 * @haystack: the longer string to search
 * @needle: the first occurance of the substring
 * Return: returns a pointer
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int i = 0, j = 0;

	while (haystack[i])
	{
		while (needle[j] && (haystack[i] == needle[0]))
		{
			if (haystack[i + j] == needle[j])
				j++;
			else
				break;
		}
		if (needle[j])
		{
			i++;
			j = 0;
		}
		else
			return (haystack + i);
	}
	return (0);
}
