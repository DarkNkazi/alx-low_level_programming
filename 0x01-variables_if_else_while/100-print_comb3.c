#include <stdio.h>

/**
 * main - Combination of 2 numbers
 * using ASCII Notation
 * 32 = space
 * 44 = comma
 * 48 = 0
 * 49 = 1
 * 56 = 8
 * 57 = 9
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int m;

	for (n = 48; n <= 56; n++)
	{
		for (m = 49; m <= 57; m++)
		{
			if (m > n)
			{
				putchar(n);
				putchar(m);
				if (n != 56 || m != 57)
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
