#include "main.h"

/**
 * rot13 - A function that encodes a string using rot13
 * @n: string to encode
 *
 * Return: address of n
 */

char *rot13(char *n)
{
	int i, j;
	char a[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char b[] = "nopqrstuvwyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; *(n + i); i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (a[j] == *(n + i))
			{
				*(n + i) = b[j];
				break;
			}
		}
	}
	return (n);
}
