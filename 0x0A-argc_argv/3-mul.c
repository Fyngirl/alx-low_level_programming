#include <stdio.h>

/**
 * main - prints an argument that multiplys
 * @argv: argument
 * @argc: argument count
 * Retrun: 1 if error and 0 if success
 */

int main(int argc, char *argv[])
{
	int x, y;

	if (argc != 3)
	{
		printf("Error\n")
			return (1);
	}

	x = atoi(argv[1]);
	y = atoi(argv[2]);
	int result = x * y;

	printf("%d\n", result);
	return (0);
}
