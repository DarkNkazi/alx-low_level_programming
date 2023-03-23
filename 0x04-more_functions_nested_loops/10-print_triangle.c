#include "main.h"

/**
 * print_triangle - Prints Triangle
 * @size: Size of Parameter
 *
 * Return: Returns nothing
 */
void print_triangle(int size)
{
	int a = 1, b;

	while (a <= size && size > 0)
	{
		b = 0;
		while (b < size - a)
		{
			_putchar(' ');
			b++;
		}
		b = 0;
		while (b < a)
		{
			_putchar('#');
			b++;
		}
		_putchar('\n');
		a++;
	}
	if (a == 1)
	{
		_putchar('\n');
	}
}
