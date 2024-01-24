#include <stdio.h>

/**
 * swap_int - swaps the values of two integers
 * @a: integer
 * @b: integer
 */

void swap_int(int *a, int *b)
{
	int v = *a;
	*a = *b;
	*b = v;
}
