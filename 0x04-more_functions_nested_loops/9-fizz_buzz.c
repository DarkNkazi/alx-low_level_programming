#include <stdio.h>

/**
 * main - Print either number or
 * fizz, buzz or fizzBuzz
 *
 * Return: returns 0
 */
int main(void)
{
	int num = 1;

	while (num <= 100)
	{
		if ((num % 3 == 0) && (num % 5 == 0))
		{
			printf("FizzBuzz");
		}
		else if ((num % 3) == 0)
		{
			printf("Fizz");
		}
		else if ((num % 5) == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%i", num);
		}
		if (num != 100)
		{
			putchar(' ');
		}
		num++;
	}
	putchar('\n');
	return (0);
}
