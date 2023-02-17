#include <stdio.h>
/**
 * main - a program that prints the alphabet in lowercase
 * Return: 0 successfully
 */
int main(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		putchar(alphabet);

		alphabet++;
	}
	putchar('\n');
	return (0);
}
