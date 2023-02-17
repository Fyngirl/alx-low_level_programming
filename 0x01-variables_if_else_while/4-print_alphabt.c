#include <stdio.h>
/**
 * main - A program that prints alphabet soup
 * Return: 0 successful
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'e' && letter != 'q')
			putchar(letter);
	}

	putchar('\n');
	return (0);
}
