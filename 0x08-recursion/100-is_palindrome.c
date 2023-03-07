#include "main.h"
#include <string.h>

/**
 * is_palindrome - checks if a string is palindrome
 * @s: base address for string
 * Return: 1 if n is prime, 0 otherwise
 */

int is_palindrome(char *s)
{
	int len = strlen(s);

	if (len <= 1)
	{
		return (1);
	}
	if (s[0] == s[len - 1])
	{
		return (is_palindrome(s + 1) && is_palindrome(s + len - 1 - 1));
	}
	else
	{
		return (0);
	}
}
