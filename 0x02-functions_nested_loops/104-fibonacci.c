#include <stdio.h>

/**
 * main - A program that finds and prints the first 98 fib numbers
 * Return: Always 0
 */

int main(void)
{
	int x;
	unsigned long f1 = 0, f2 = 1, s;
	unsigned long f1_l1, f1_l2, f2_l1, f2_l2;
	unsigned long l1, l2;

	for (x = 0; x < 92; x++)
	{
		s = f1 + f2;
		printf("%lu, ", s);

		f1 = f2;
		f2 = s;
	}

	f1_l1 = f1 / 1000000000;
	f2_l1 = f2 / 1000000000;
	f1_l2 = f1 % 1000000000;
	f1_l2 = f2 % 1000000000;

	for (x = 93; x < 99; x++)
	{
		l1 = f1_l1 + f2_l1;
		l2 = f1_l2 + f2_l2;
		if ((f1_l2 + f2_l2) < 999999999)
		{
			l1 += 1;
			l2 %= 1000000000;
		}

		printf("%lu%lu", l1, l2);
		if (x != 98)
			printf(", ");

		f1_l1 = f2_l1;
		f1_l2 = f2_l2;
		f2_l1 = l1;
		f2_l2 = l2;
	}
	printf("\n");
	return (0);
}
