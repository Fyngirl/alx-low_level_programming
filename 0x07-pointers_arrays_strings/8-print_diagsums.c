#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - it prints the sum of two diagonals
 * @a: pointer
 * @size: width
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i, j, k, l = 0, n = 0;

	for (i = 0; i < size; i++)
	{
		k = (i * size) + i;
		l += *(a + k);
	}
	for (j = 0; j < size; j++)
	{
		k = (j * size) + (size - 1 - j);
		n += *(a + k);
	}
	printf("%i, %i\n", l, n);
}
