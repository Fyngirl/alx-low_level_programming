#include "main.h"

/**
 * swap_int - a function that swaps the value of two integers
 * @a: first int
 * @b: second int
 * Return: Always 0
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
