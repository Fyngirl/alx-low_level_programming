#include "main.h"

/**
 * _puts - A function that prints a string
 * @str: the string to be returned
 * Return: Lenth of string
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
