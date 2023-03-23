#include "main.h"

/**
 * print_numbers - Print all numbers 0-9
 *
 * Return: returns nothing
 */
void print_numbers(void)
{
	int num = 48;

	for (num = 48; num < 58; num++)
	{
		_putchar(num);
	}
	_putchar(10);
}
