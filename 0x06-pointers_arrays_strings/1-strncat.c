#include "main.h"

/**
 *  _strncat - Concatenates two strings using at most
 *  an inputted number of bytes from src.
 *
 *  @dest: The string to be appended.
 *  @src: The string to be appended to dest.
 *  @n: The number of bytes from src to be appended to dest.
 *
 *  Return: A pointer to the resulting string dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int ref = 0, len = 0;

	while (dest[ref++])
	{
		len++;
	}
	for (ref = 0; src[ref] && ref < n; ref++)
	{
		dest[len++] = src[ref];
	}
	return (dest);
}
