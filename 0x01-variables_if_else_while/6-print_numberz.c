#include <stdio.h>

/**
 * main - Prints numbers from 0-9.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i = 0;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
