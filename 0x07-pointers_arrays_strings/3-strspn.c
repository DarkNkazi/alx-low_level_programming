#include "main.h"

/**
 * _strspn - Function that gets the length of a prefix substring
 *
 * @s: String to e scanned
 * @accept: String to match with s
 *
 * Return: Return Count
 */
unsigned int _strspn(char *s, char *accept)
{
	int  a, b;
	char *tmp1, *tmp2;
	int Count = 0;

	tmp1 = s;
	tmp2 = accept;

	a = 0;
	while (tmp1[a] != '\0')
	{
		b = 0;
		while (tmp2[b] != '\0')
		{
			if (tmp2[b] == tmp1[a])
			{
				Count++;
				break;
			}
			b++;
		}
		if (s[a] != accept[b])
		{
			break;
		}
		a++;
	}
	return (Count);
}
