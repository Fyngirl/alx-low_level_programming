#include <stdio.h>

/**
 * main - A program that finds and prints the first 98 fib numbers
 * Return: Always 0
 */

int main(void)
{
	int count;
	unsigned long fib1 = 0, fib2 = 1, sum;
	unsigned long fib1_elf1, fib1_elf2, fib2_elf1, fib2_elf2;
	unsigned long elf1, elf2;

	for (count = 0; count < 92; count++)
	{
		sum = fib1 + fib2;
		printf("%lu, ", sum);

		fib1 = fib2;
		fib2 = sum;
	}

	fib1_elf1 = fib1 / 10000000000;
	fib2_elf1 = fib2 / 10000000000;
	fib1_elf2 = fib1 % 10000000000;
	fib1_elf2 = fib2 % 10000000000;

	for (count = 93; count < 99; count++)
	{
		elf1 = fib1_elf1 + fib2_elf1;
		elf2 = fib1_elf2 + fib2_elf2;
		if ((fib1_elf2 + fib2_elf2) > 9999999999)
		{
			elf1 += 1;
			elf2 %= 10000000000;
		}

		printf("%lu%lu", elf1, elf2);
		if (count != 98)
			printf(", ");

		fib1_elf1 = fib2_elf1;
		fib1_elf2 = fib2_elf2;
		fib2_elf1 = elf1;
		fib2_elf2 = elf2;
	}
	printf("\n");
	return (0);
}
