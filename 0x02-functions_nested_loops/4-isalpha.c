#include "main.h"

/**
 * _isalpha - This function checks for alphabetic character
 * @c : checks if lower or uppercase
 * Return: 1 if c is a lowercase or uppercase, otherwise 0
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
