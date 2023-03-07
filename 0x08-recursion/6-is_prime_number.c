#include "main.h"

/**
 * check - check to know if number is prime
 * @i: int
 * @j: int
 * Return: int
 */
int check(int i, int j)
{
	if (j < 2 ||  j % i == 0)
		return (0);
	else if (i > j / 2)
		return (1);
	else
		return (check(i + 1, j));
}

/**
 * is_prime_number - a function that states if number is prime
 * @n: int
 * Return: int
 */
int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (check(2, n));
}
