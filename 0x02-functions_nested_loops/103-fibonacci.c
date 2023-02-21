#include <stdio.h>

/**
 * main - finds and prints the sum of even-valued terms
 * Return: Always 0
 */

int main(void)
{
	unsigned long fib1 = 0, fib2 = 1, sumfib;
	float out_sum;

	while (1)
	{
		sumfib = fib1 + fib2;
		if (sumfib > 4000000)
			break;

		if ((sumfib % 2) == 0)
			out_sum += sumfib;

		fib1 = fib2;
		fib2 = sumfib;
	}
	printf("%.0f\n", out_sum);

	return (0);
}
