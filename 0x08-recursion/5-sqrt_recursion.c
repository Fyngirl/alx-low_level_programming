#include "main.h"

/**
 * check - checks the square root
 * @i: int
 * @j: int
 * Return: int
 */
int check(int i, int j)
{
	if (i * i == j)
		return (i);
	if (i * i > j)
		return (-1);
	return (check(i + 1, j));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: integer to find the square
 * Return: natural square root or -1
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (check(1, n));
}
