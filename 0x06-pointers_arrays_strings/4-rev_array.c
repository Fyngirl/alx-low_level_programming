#include "main.h"

/**
 * reverse_array - Reverses the content of an array of integers
 * @a: array
 * @n: integer
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int j = n - 1;

		while (i < j)
		{
			a[i] = a[j];
			a[j] = a[i];
			i++;
			j--;
		}
}
