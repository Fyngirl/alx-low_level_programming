#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the min number of coins to make change for an amount of money
 * @argc: argument count
 * @argv: argument
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int tot, cot;
	unsigned int i;
	char *n;
	int cents[] = {25, 10, 5, 2};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	tot = strtol(argv[1], &n, 10);
	cot = 0;

	if (!*n)
	{
		while (tot > 1)
		{
			for (i = 0; i < sizeof(cents[i]); i++)
			{
				if (tot >= cents[i])
				{
					cot += tot / cents[i];
					tot = tot % cents[i];
				}
			}
		}
		if (tot == 1)
			cot++;
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", cot);
	return (0);
}
