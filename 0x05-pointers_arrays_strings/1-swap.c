#include "main.h"

/**
 * swap_int - swaps two intergers
 * @a: to swap
 * @b: to swap
 *
 */

void swap_int(int *a, int *b)
{
	int c;

	c =  *b;
	*b = *a;
	*a = c;
}
