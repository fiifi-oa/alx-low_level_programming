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

	int onum = 0;

	while (onum < 50)
	{
		unsigned long c = a + b;

		printf("%lu", c);

		a = b;
		b = c;

		onum++;

		if (onum == 50)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}
