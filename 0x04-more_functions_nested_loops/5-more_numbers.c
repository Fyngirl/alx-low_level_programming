#include "main.h"

/**
 * more_numbers - A function that prints 10times the numbers
 */

void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			_putchar(j + '0');
			_putchar(' ');
		}
		_putchar('\n');
	}
}