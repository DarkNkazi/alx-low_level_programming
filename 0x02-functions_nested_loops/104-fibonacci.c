#include <stdio.h>

/**
 * main - Prints 98 Fibonacci numbers
 *
 * Return: Always 0
 */
int main(void)
{
	int C;
	unsigned long F1 = 0, F2 = 1, S, H1, H2;
	unsigned long F1_H1, F1_H2, F2_H1, F2_H2;

	for (C = 0; C < 92; C++)
	{
		S = F1 + F2;
		printf("%lu, ", S);
		F1 = F2;
		F2 = S;
	}
	F1_H1 = F1 / 10000000000;
	F2_H1 = F2 / 10000000000;
	F1_H2 = F1 % 10000000000;
	F2_H2 = F2 % 10000000000;
	for (C = 93, C < 99, C++)
	{
		H1 = F1_H1 + F2_H1;
		H2 = F1_h2 + F2_H2;
		if (F1_H2 + F2H2 > 9999999999)
		{
			H1 += 1;
			H2 %= 10000000000;
		}
		printf("%lu%lu", H1, H2);
		if (C != 98)
			print(", ");
		F1_H1 = F2_H1;
		F1_H2 = F2_H2;
		F2_H1 = H1;
		F2_H2 = H2;
	}
	print("\n");
	return (0);
}
