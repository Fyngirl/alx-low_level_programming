#include "main.h"

/**
 * print_line - draws a straight line in a terminal
 * @n: number of times char should be printed
 */

void print_line(int n)
{
	int j;

	for (j = 0; j < n; j++)
	{
		_putchar('-');
	}
	_putchar('\n');
}
