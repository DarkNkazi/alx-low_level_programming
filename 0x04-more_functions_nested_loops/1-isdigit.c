#include "main.h"

/**
 * _isdigit - Function verifies if a char a digit or not
 * @c: Tested Character
 * Return: returns 1 if its a digit, 0 if not
 */
int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
	{
		return (1);
	}
	else
		return (0);
}
