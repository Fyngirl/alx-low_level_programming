#include "main.h"

/**
 * string_toupper - changes all lowercase letters to uppercase
 * @x: pointer
 * Return: x
 */

char *string_toupper(char *x)
{
	int a = 0;

	while (x[a] != '\0')
	{
		if (x[a] >= 'a' && x[a] <= 'z')
		{
			x[a] = x[a] - 'a' + 'A';
		}
		a++;
	}
	return (x);
}
