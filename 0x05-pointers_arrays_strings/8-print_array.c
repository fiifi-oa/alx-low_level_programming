#include "main.h"
#include <stdio.h>

/**
 * print_array - print n elements
 * @n: number of elements
 * @a: array
 */

void print_array(int *a, int n)
{
	int num;

	for (num = 0; num < n; num++)
	{
		printf("%d", a[num]);
		if (num != n - 1)
			printf(", ");
	}
	printf("\n");
}
