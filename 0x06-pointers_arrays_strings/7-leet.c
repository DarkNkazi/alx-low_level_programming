#include "main.h"

/**
 * leet - function encodes a string into 1337
 *
 * @s: The string to encode
 *
 * Return: Returns the encoded string
 */
char *leet(char *s)
{
	int a = 0, b = 0, c = 5;
	char x[5] = {'A', 'E', 'O', 'T', 'L'};
	char y[5] = {'4', '3', '0', '7', '1'};

	while (s[a])
	{
		b = 0;
		while (b < c)
		{
			if (s[a] == x[b] || s[a] - 32 == x[b])
			{
				s[a] = y[b];
			}
			b++;
		}
		a++;
	}
	return (s);
}
