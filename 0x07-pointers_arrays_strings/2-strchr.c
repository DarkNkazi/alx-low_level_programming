#include "main.h"

/**
 * _strchr - Function that locates a character in a string
 *
 * @s: String
 * @c: Character to sarch for
 *
 * Return: Returns 0
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		++s;
	}
	if (*s == c)
	{
		return (s);
	}
	return (0);
}
