#include <stdio.h>

/**
 * main - print fibonacci numbers
 *
 * Return: 0
 */

int main(void)
{
	int a = 1;
	int b = 2;

	int onum = 1;

	while (onum < 50)
	{
		int c = a + b;

		printf("%d, ", c);

		a = b;
		b = c;

		onum++;
	}
	return (0);
}
