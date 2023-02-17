#include <stdio.h>
/**
 * main- a program that prints the alphabet
 * Return: 0 successful
 */
int main(void)
{
char alphabet = 'a';
while (alphabet <= 'Z')
{
	putchar(alphabet);
	alphabet++;
}
		putchar('\n');
		return (0);
}
