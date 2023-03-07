#include "main.h"

/**
 * _pow_recursion - returns the values of x raised to the power of y
 * @x: value to be raised
 * @y: power of the value
 * Return: returns -1 if lower than y
 */

int _pow_recursion(int x, int y)
{
	int i;

	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
	i = x * _pow_recursion(x, y - 1);
	return (i);
	}
}
