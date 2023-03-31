#include "main.h"
#include <stdio.h>

/**
 * _strcat - Concatenates 2 strings
 *
 * @dest: The destination string
 * @src: The source string
 *
 * Return: Returns a pointer to the resulting string destination
 */
char *_strcat(char *dest, char *src)
{
	int len = 0, i;

	while (dest[len])
	{
		len++;
	}

	for (i = 0; src[i] != 0; i++)
	{
		dest[len] = src[i];
		len++;
	}
	dest[len] = '\0';
	return (dest);
}
