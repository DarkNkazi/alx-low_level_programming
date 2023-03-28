#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 * Return: Nothing
 */
void rev_string(char *s)
{
	char tmp;
	int a, len, len_1;

	len = 0;
	len_1 = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	len_1 = len - 1;

	for (a = 0; a < len / 2; a++)
	{
		tmp = s[a];
		s[a] = s[len_1];
		s[len_1--] = tmp;
	}
}
