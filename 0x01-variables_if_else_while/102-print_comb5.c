#include <stdio.h>
/**
 * main - A program that prints all possible combinations
 *        of two two-digit numbers
 * Return: 0
 */
int main(void)
{
	int k, i;

	for (k = 0; k < 100; k++)
	{
		for (i = 0; i < 100; i++)
		{
			if (k < i)
			{
				putchar((k / 10) + 48);
				putchar((k % 10) + 48);
				putchar(' ');
				putchar((i / 10) + 48);
				putchar((i % 10) + 48);
				if (k != 98 || i != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
