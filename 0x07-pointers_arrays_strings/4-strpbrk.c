#include "main.h"

/**
 * _strpbrk - Function that searches a string for any of a set of bytes
 *
 * @s: String to be searched
 * @accept: Character in sting 1 that matches string 2
 *
 * Return: Returns string s
 */

char *_strpbrk(char *s, char *accept)
{
	int a;

	while (*s != '\0')
	{
		a = 0;
		while (accept[a] != '\0')
		{
			if (*s == accept[a])
			{
				return (s);
			}
			a++;
		}
		s++;
	}
	return (0);
}
