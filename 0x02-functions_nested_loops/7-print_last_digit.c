#include "main.h"
/**
 * print_last_digit - Prints last digit of a number
 *
 * @n: the int to check last digit on
 *
 * Return: The value of the last digit
 */
int print_last_digit(int n)
{
	int nv;

	if (n < 0)
	{
		nv = -1 * (n % 10);
		_putchar(nv + '0');
		return (nv);
	}
	else
	{
		nv = n % 10;
		_putchar(nv + '0');
		return (nv);
	}
}
