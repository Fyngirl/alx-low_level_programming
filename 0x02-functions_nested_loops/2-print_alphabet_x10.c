#include "main.h"
/**
 * print_alphabet_x10 - A function that prints 10 times the
 *                the alphabet, in lowercase
 */
void print_alphabet_x10(void)
{
	char Letter;
	int count = 0;

	while (count++ <= 9)
	{

	for (Letter = 'a'; Letter <= 'z'; Letter++)

		_putchar(Letter);
	}
	_putchar('\n');
}
