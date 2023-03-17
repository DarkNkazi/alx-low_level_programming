#include <stdio.h>

/**
 * main - Alphabet soup
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		if (a != 'q' && a != 'e')
		{
			putchar(a);
		}
		a++;
	}
	putchar('\n');
	return (0);
}
