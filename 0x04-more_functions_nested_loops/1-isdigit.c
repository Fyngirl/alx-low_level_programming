#include "main.h"

/**
 * _isdigit - A function that checks for a digit
 * @c: the character that is to be checked
 * Return: 1 if char is a digit, 0 if otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
