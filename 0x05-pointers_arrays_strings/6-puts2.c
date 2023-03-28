#include "main.h"

/**
 * puts2 - Prints one char out of 2 of a string
 * @str: String to print the chars from
 * Return: Nothing
 */
void puts2(char *str)
{
	int len, a;

	len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	for (a = 0; a < len; a += 2)
	{
		_putchar(str[a]);
	}

	_putchar('\n');
}
