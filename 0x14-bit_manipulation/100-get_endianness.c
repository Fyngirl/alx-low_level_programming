#include "main.h"
#include <stdio.h>

/**
 * get_endianness - checks endianness
 * Return: void
 */

int get_endianness(void)
{
	int i = 1;
	char *p = (char *)&i;

	return (*p == 1);
}
