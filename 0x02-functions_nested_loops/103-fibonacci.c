#include <stdio.h>

/**
 * main - print sum of even fibonacci numbers less than 4000000
 *
 * Return: 0
 */

int main(void)
{
	unsigned long a = 0;
	unsigned long b = 1;

	unsigned long sum;

	float total_sum;


	while (1)
	{
		sum = a + b;
		if (sum > 4000000)
			break;

		if ((sum % 2) == 0)
			total_sum += sum;

		a = b;
		b = sum;
	}
	printf("%.f\n", total_sum);

	return (0);
}
