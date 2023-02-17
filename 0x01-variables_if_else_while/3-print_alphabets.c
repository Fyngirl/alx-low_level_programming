#include <stdio.h>
/**
 * main- a program that prints the alphabet
 * Return: 0 successful
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);

	for (letter = 'A'; letter <= 'Z'; letter++)
		putchar(letter);

	putchar('\n');
	return (0);
}
