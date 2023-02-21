#include "main.h"
/**
 * print_alphabet_x10 - A function that prints 10 times the
 *                the alphabet, in lowercase
 */
void print_alphabet_x10(void)
{
	int count = 0;
	char Letter;

	while (count++ <= 9)
	{
		for (Letter = 'a'; Letter <= 'z'; Letter++)
			_putchar(Letter);
		_putchar('\n');
	}
}
