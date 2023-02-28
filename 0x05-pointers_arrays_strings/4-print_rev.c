#include "main.h"
#include <stdio.h>

/**
 * print_rev - Prints a string in reverse, followed by a new line
 * @s: string to be printed in reverse
 * Return: Always 0
 */

void print_rev(char *s)
{
	int a, b;

	b = 0;
	while (s[b] != '\0')
		b++;

	for (int a = b - 1; a >= 0; a--)
	{
		putchar(s[a]);
	}
	putchar('\n');
}
