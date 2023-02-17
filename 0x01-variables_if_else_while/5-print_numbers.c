#include <stdio.h>
/**
 * main - A program that prints all single digit numbers
 * Return: 0 successful
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		printf("%d", num);

	printf("\n");
	return (0);
}
