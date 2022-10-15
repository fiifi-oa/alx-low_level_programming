#include <stdio.h>

/**
 * main - combination of single digit numbers
 *
 * Return: always 0
 */

int main(void)
{
	int comb;

	for (comb = 18; comb < 98 ; comb++)
	{
		putchar(comb);
		if (comb != 97)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}

