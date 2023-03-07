#include "main.h"
#include <stdio.h>

/**
 * factorial - returns the factorial of a given number
 * @n: factorial number
 * Return: -1 to indicate error
 */

int factorial(int n)
{
	int x;

	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		x = n * factorial(n - 1);
	}
	return (x);
}
