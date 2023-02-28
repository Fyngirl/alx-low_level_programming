#include "main.h"
#include <stdio.h>

/**
 * puts2 - prints every other charcater of a string
 * @str: character to check
 * Return: Always 0
 */

void puts2(char *str)
{
	int string;

	for (string = 0; str[string] != '\0'; string++)
		if (string % 2 == 0)
			putchar(str[string]);
	putchar('\n');
}
