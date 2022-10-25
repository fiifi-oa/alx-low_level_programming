#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generate a random password
 *
 * Return: 0
 */

int main(void)
{
	int pass[100];
	int a, sum, b;

	sum = 0;

	srand(time(NULL));

	for (b = 0; b < 100; b++)
	{
		pass[a] = rand() % 78;
		sum += (pass[a] + '0');
		putchar(pass[a] + '0');

		if ((2772 - sum) - '0' < 78)
		{
			b = 2772 - sum - '0';
			sum += b;
			putchar(n + '0');
			break;
		}
	}
	return (0);
}
