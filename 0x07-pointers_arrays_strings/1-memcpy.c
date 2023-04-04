#include "main.h"

/**
 * _memcpy - Function that copies memory area
 *
 * @dest: Content to be copied to
 * @src: Data Source to be copied
 * @n: Memory Bytes
 *
 * Return: Returns dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	a = 0;
	while (a < n)
	{
		*(dest + a) = *(src + a);
		a++;
	}
	return (dest);
}
