#include "main.h"
#include <stdio.h>

/**
 * print_array - a function that prints n elements of an array of int
 * @a: int to check
 * @n: int to check
 * Return: Always 0
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
		if (i != n - 1)
			printf("%d, ", a[i]);
		else
			printf("%d", a[i]);
	printf("\n");
}