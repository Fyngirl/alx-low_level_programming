#include "main.h"

/**
 * cap_string - Capitalizes all words of a string
 * @s: string to be capitalized
 * Return: s
 */

char *cap_string(char *s)
{
	int a = 0, b;
	char c[] = " \t\n,;.!?\"(){}";

	while (*(s + a))
	{
		if (*(s + a) >= 'a' && *(s + a) <= 'z')
		{
			if (a == 0)
				*(s + a) -= 'a' - 'A';
			else
			{
				for (b = 0; b <= 12; b++)
				{
				if (c[b] == *(s + a - 1))
				*(s + a) -= 'a' - 'A';
				}
			}
		}
	a++;
	}
return (s);
}
