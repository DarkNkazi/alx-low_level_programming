#include <stdio.h>

/**
 * main - Print the sum of even Fibonacci numbers
 *
 * Return: Nothing
 */
int main(void)
{
	int a;
	unsigned long int b = 1, c = 2, NT, Sum = 0;

	for (a = 1; a <= 33; ++a)
	{
		if (b < 4000000 && (b % 2) == 0)
		{
			Sum = Sum + b;
		}
		NT = b + c;
		b = c;
		c = NT;
	}
	printf("%lu\n", Sum);
	return (0);
}
