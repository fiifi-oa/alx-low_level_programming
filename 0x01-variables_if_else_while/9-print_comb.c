#include <stdio.h>

/**
 * main - combination of single digit numbers
 *
 * Return: always 0
 */

int main(void)
{
	int comb;

	for (comb = 48; comb < 58 ; comb++)
	{
		putchar(comb);
		if (comb != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}

