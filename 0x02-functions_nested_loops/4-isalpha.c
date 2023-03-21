#include "main.h"
/**
 * _isalpha - Checks for alphabet Char
 *
 * @c: The character to be checked for
 *
 * Return: 1 if c is a letter, 0 otherwise
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
