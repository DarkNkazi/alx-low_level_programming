#include <stdio.h>

/**
 * main - Program to compute and print results
 *
 * Return: Int
 */
int main(void)
{
	int a = 0;
	int b = 0;

	while (a < 1024)
	{
		if (a % 3 == 0 || a % 5 == 0)
		{
			b += a;
		}
		a += 1;
	}
	printf("%d\n", b);
	return (0);
}
