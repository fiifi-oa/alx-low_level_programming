#include <stdio.h>

/**
 * main -  print the sum of all multples of 3 and 5
 *
 * Return: 0
 */

int main(void)
{
	int sum = 0;
	int num1;

	for (num1 = 0; num1 < 1024; num1++)
	{
		int a = num1 % 3;

		int b = num1 % 5;

		if (a == 0 || b == 0)
		{
			sum += num1;
		}
	}

	printf("%d\n", sum);

	return (0);
}
