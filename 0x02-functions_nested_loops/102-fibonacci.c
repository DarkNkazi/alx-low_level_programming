#include <stdio.h>

/**
 * main - Prints Fibonacci numbers
 *
 * Return: int
 */
int main(void)
{
	long a = 0;
	long b = 1;
	int c = 0;
	long d;

	while (c < 50)
	{
		d = a + b;
		if (c != 49)
			printf("%ld, ", d);
		else
			printf("%ld\n", d);
		a = b;
		b = d;
		c += 1;
	}
	return (0);
}
