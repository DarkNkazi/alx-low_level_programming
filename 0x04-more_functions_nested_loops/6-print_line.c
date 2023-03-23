#include "main.h"

/**
 * print_line - prints a straight line
 * @n: Variable/Paramete
 * Return: Returns nothing
 */
void print_line(int n)
{
	while (n-- > 0)
	{
		_putchar('_');
	}
	putchar('\n');
}
