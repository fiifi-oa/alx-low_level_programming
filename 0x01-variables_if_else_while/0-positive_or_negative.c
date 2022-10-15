#include <stdlib>
#include <time.h>
#include <stdio.h>

/**
 * main - prints whether a number is postive or negative or 0
 *
 * Return: always 0
 */

int main(void)
{
	int a;

	srand(time(0));
	a = rand() - RAND_MAX / 2;

	if (a > 0)
	{
		printf("%d is positive\n", a);
	}
	else if (a == 0)
	{
		printf("%d is zero\n", a);
	}
	else
	{
		printf("%d is negative\n", a);
	}

	return (0);
}
