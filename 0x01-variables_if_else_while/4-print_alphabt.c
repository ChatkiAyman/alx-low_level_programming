#include <stdio.h>

/**
 * main - Prints the alphabet without e and q.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alp[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		if (i != 4 && 16)
		{
			putchar(alp[i]);
		}
	}
	putchar('\n');
	return (0);
}
