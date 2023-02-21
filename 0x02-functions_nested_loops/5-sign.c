#include "main.h"

/**
 * print_sign - This is a function that prints the sign of a number
 * @n: it is the parameters 1, 0 and -1
 * Return: 1 if n is greater than zero, 0 if n is zero and
 *		-1 if n is less than zero
 */

int print_sign(int n)
{

	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
