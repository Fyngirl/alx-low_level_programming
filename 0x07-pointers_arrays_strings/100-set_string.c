#include "main.h"
#include <stdio.h>

/**
 * set_string - sets value of a pointer to char
 * @s: pointer
 * @to: string to change pointer to
 * Return: void
 */

void set_string(char **s, char *to)
{
	*s = to;
}
