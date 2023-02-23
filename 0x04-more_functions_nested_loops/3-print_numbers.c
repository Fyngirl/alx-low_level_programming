#include "main.h"

/**
 * print_numbers - prints the numbers from 0 to 9 followed by a new line
 * @i - the value to be printed
 * Return: Always 0
 */

void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');

	return (0);
}
