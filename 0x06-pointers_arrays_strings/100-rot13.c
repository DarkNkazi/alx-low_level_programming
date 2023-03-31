#include "main.h"
#include <stdio.h>

/**
 * rot13 - function that encodes a string using rot13
 *
 * @s: The string to encode
 *
 * Return: Returns the encoded string
 */
char *rot13(char *s)
{
	int a = 0;

	while (s[a])
	{
		while ((s[a] >= 'a' && s[a] <= 'z') || (s[a] >= 'A' && s[a] <= 'Z'))
		{
			if ((s[a] > 'm' && s[a] <= 'z') || (s[a] > 'M' && s[a] <= 'Z'))
			{
				s[a] -= 13;
				break;
			}
			s[a] += 13;
			break;
		}
		a++;
	}
	return (s);
}
