#include "main.h"

/**
 * print_diagsums - Function that sets the value of a pointer to a char
 *
 * @a: 2d Array of characters
 * @size: Matrix number
 *
 * Return: Returns void
 */
void print_diagsums(int *a, int size)
{
	int x, s1, s2;

	s1 = 0;
	s2 = 0;

	x = 0;
	while (x < size)
	{
		s1 = s1 + *(a + x * size + x);
		s2 = s2 + *(a + x * size + size - x - 1);
		x++;
	}
	printf("%i, %i\n", s1, s2);
}
