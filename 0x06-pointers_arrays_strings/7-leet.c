#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: string to encode
 * Return: address s
 */

char *leet(char *s)
{
	int a, b;
	char c[] = "aAeEoOtTlL";
	char d[] = "4433007711";

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; b < 10; a++)
		{
			if (s[a] == c[b])
			{
				s[a] = d[b];
			}
		}
	}
	return (s);
}
