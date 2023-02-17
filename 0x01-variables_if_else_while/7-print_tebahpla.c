#include <stdio.h>
/**
 * main - A program that prints the lowercase alphabet
 * Return: 0 Successfully
 */
int main(void)
{
	char alphabet = 'z';

	while (alphabet <= 'a')
	{
		putchar(alphabet);

		alphabet++;
	}
	putchar('\n');
	return (0);
}
