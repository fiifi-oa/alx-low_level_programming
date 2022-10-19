#include <stdio.h>

/**
 * main - print fibonacci numbers
 *
 * Return: 0
 */

int main(void)
{
	unsigned long a = 0;
	unsigned long b = 1;

	int onum = 1;

	while (onum < 50)
	{
		unsigned long c = a + b;

		printf("%lu, ", c);

		a = b;
		b = c;

		onum++;
	}
	return (0);
}
