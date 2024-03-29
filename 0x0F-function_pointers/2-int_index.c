#include "function_pointers.h"

/**
 * int_index - the function searches for an integer
 * @array: pointer to an array of integers
 * @size: size of the array
 * @cmp: pointer to a function that takes an integer as input
 * Return: an integer and -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
	{
		return (-1);
	}
	if (array != NULL && cmp != NULL)
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}
	return (-1);
}
