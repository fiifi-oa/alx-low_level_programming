#include <stdio.h>

/**
 * main - combination of single digit numbers
 *
 * Return: always 0
 */

int main(void)
{
	int comb;

	for (comb = 28; comb < 38 ; comb++)
	{
		putchar(comb);
		if (comb != 34)
		{
			putchar(',');
			putchar(' ');
		}
		putchar('\n');
	}
	return (0);
}

