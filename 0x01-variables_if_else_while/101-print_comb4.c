#include <stdio.h>

/**
 * main - print combination of three digits
 *
 * Return: 0
 */


int main(void)
{
	int a, b, c;

	for (a = 0; a < 8; a++)
	{
		for (b = a + 1; b < 9; b++)
		{
			for (c = a + 2; c < 10; c++)
			{
				putchar(a + '0');
				putchar(b + '0');
				putchar(c + '0');

				if (a == 7 && b == 8 && c == 9)
					break;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
