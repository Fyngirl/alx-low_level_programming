#include "main.h"

/**
 * get_bit - returns the value of the bit of a given index
 * @n: value to return
 * @index: given index
 *
 * Return: returns the values of the bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	return ((n >> index) & 1);
}
