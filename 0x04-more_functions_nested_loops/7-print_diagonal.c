#include "main.h"

/**
 * print_diagonal - Prints in a diagonal pattern
 * @n: Parameter/variable
 * Return: Returns nothing
 */
void print_diagonal(int n)
{
	int L, S;

	if (n > 0)
	{
		for (L = 0; L < n; L++)
		{
			for (S = 0; S < L; S++)
			{
				_putchar(' ');
				_putchar('\\');
				if (L == (n - 1))
				{
					continue;
					_putchar('\n');
				}
			}
		}
	}
	_putchar('\n');
}
