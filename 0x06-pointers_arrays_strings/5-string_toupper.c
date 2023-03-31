#include "main.h"

/**
 * string_toupper - Changes all lowercase letters to uppercase
 *
 * @str: The string to be changed.
 *
 * Return: Returns A pointer to the changed string.
 */
char *string_toupper(char *str)
{
	int ref = 0;

	while (str[ref])
	{
		if (str[ref] >= 'a' && str[ref] <= 'z')
		{
			str[ref] -= 32;
		}
		ref++;
	}
	return (str);
}
