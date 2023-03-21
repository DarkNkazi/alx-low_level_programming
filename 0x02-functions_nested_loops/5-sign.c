#include "main.h"
/**
 * print_sign - Prints sign of a Number
 *
 * @n: the Int to check
 *
 * Return: 1 and prints + if n is greatr than Zero
 * Prints 0 if n is zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
	}
	return (-1);
}
