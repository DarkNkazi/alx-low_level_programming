#include "main.h"

/**
 * _puts - Prints a string to stdout
 * @str: Pointer to the string to print
 * Returns: Nothing
 */
void _puts(char *str)
{
	int a;

	for (a = 0; str[a] != '\0'; a++)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
}
