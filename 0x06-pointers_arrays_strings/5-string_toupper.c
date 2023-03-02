#include "main.h"

/**
 * string_toupper - changes all lowercase letters to uppercase
 * @x: pointer
 * Return: x
 */

char *string_toupper(char *x)
{
	int a = 0;

	while (x[i] != '\0')
	{
		if (x[i] >= 'a' && x[i] <= 'z')
		{
			x[i] = x[i] - 'a' + 'A';
		}
		i++;
	}
	return (x);
}
