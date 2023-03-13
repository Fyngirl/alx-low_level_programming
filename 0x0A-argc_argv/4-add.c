#include <stdio.h>
#include <stdlib.h>

/**
 * main - Adds two numbers
 * @argc: argument count
 * @argv: argument
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int a, b;
	int sum = 0;
	char *arg;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	for (a = 1; a < argc; a++)
	{
		b = strtol(argv[a], &arg, 10);
		if (*arg)
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			sum += b;
		}
	}
	printf("%d\n", sum);
	return (0);
}
