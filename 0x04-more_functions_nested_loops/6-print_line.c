#include "main.h"

/**
 * print_line: draws a line
 * @n: number of the character _ in the line
 */

void print_line(int n)
{
	if (n > 0)
	{
		int i;
		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	} else
	{
		_putchar('\n');
	}
}
