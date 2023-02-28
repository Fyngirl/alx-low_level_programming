#include "main.h"
#include <stdio.h>

/**
 * _puts - A function that prints a string
 * @str: the string to be returned
 * Return: Length of string
 */

void _puts(char *str)
{
	int s = 0;

	while (str[s] != '\0')
	{
		putchar(str[s]);
		s++;
	}
	putchar('\n');
}
