#include "main.h"

/**
 * _isupper - Function that verifies if a character is Upper or Lower case
 * @c: Tested variable
 * Return: Returns 1 if Upper and 0 if Lower
 */
int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
	else
		return (0);
}
