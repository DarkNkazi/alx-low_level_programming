#include "main.h"

/**
 * reverse_array - Reverses the content of an array of integers.
 *
 * @a: The array of integers to be reversed.
 * @n: The number of elements in the array.
 *
 * Return: Returns nothing
 */
void reverse_array(int *a, int n)
{
	int tmp, ref;

	for (ref = n - 1; ref >= n / 2; ref--)
	{
	tmp = a[n - 1 - ref];
	a[n - 1 - ref] = a[ref];
	a[ref] = tmp;
	}
}
