#include "function_pointers.h"

/**
 * array_iterator - it executes a function given as a parameter
 * @array: pointer to an array of integers
 * @size: the size of the array
 * @action: pointer to a function
 * Return: Void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
