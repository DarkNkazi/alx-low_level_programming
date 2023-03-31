#include "main.h"

/**
 * infinite_add - add two numbers
 *
 * @n1: first number.
 * @n2: second number.
 * @r: results.
 * @size_r: result size.
 *
 * Return: Returns the addition of n1 and n2.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int sum = 0, len_1, len_2, i, j;

	for (len_1 = 0; n1[len_1]; len_1++)
	;
	for (len_2 = 0; n2[len_2]; len_2++)
	;
	if (len_1 > size_r || len_2 > size_r)
		return (0);
	len_1--;
	len_2--;
	size_r--;
	for (i = 0; i < size_r; i++, len_1--, len_2--)
	{
		if (len_1 >= 0)
			sum += n1[len_1] - '0';
		if (len_2 >= 0)
			sum += n2[len_2] - '0';
		if (len_1 < 0 && len_2 < 0 && sum == 0)
			break;
		r[i] = sum % 10 + '0';
		sum /= 10;
	}
	r[i] = '\0';
	if (len_1 >= 0 || len_2 >= 0 || sum)
		return (0);
	for (i--, j = 0; i > j; i--, j++)
	{
		sum = r[i];
		r[i] = r[j];
		r[j] = sum;
	}
	return (r);
}
