#include "main.h"

/**
 * print_numbers -  fuction that prints 0 to 9
 */

void print_numbers(void)
{
	int count;

	for (count = 0; count < 10; count++)
	{
		_putchar(count + '0');
	}
	_putchar('\n');
}
