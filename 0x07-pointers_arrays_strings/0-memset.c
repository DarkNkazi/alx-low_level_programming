#include "main.h"

/**
 * _memset - function that fills memory with a constant byte
 *
 * @s: Pointer block of memory to fill
 * @b: Value to set
 * @n: Bytes of memory
 *
 * Return: Returns Pointer block
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		*(s + a) = b;
	}
	return (s);
}
