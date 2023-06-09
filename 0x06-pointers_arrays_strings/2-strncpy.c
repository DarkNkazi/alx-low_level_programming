#include "main.h"

/**
 * _strncpy - Copies at most an inputted number
 * of bytes from string src into dest.
 *
 * @dest: The buffer storing the string copy.
 * @src: The source string.
 * @n: The maximum number of bytes to copied from src.
 *
 * Return: Returns A pointer to the resulting string dest.
 */
char *_strncpy(char *dest, char *src, int n)
{

	int ref = 0, len = 0;

	while (src[ref++])
	{
	len++;
	}

	for (ref = 0; src[ref] && ref < n; ref++)
	{
	dest[ref] = src[ref];
	}

	for (ref = len; ref < n; ref++)
	{
	dest[ref] = '\0';
	}
	return (dest);
}
