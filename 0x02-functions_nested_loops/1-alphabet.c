#include "main.h"
/**
 * print_alphabet - A function that prints the alphabet, in lowercase,
 *          followed by a new line
 */
void print_alphabet(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{

		_putchar(alphabet);
	}
	_putchar('\n');
}
