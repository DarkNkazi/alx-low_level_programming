#include "main.h"
#include <stdio.h>

/**
 * print_buffer - Function Prints a buffer
 *
 * @b: The buffer to be printed.
 * @size: The number of bytes to be printed from the buffer.
 *
 * Returns: Returns nothing
 */
void print_buffer(char *b, int size)
{
	int byte, ref;

	for (byte = 0; byte < size; byte += 10)
	{
		printf("%08x: ", byte);
		for (ref = 0; ref < 10; ref++)
		{
			if ((ref + byte) >= size)
			{
				printf("  ");
			}
			else
			{
				printf("%02x", *(b + ref + byte));
			}
			if ((ref % 2) != 0 && ref != 0)
			{
				printf(" ");
			}
		}
		for (ref = 0; ref < 10; ref++)
		{
			if ((ref + byte) >= size)
				break;
			else if (*(b + ref + byte) >= 31 && *(b + ref + byte) <= 126)
				printf("%c", *(b + ref + byte));
			else
				printf(".");
		}
		if (byte >= size)
			continue;
		printf("\n");
	}
	if (size <= 0)
		printf("\n");
}
