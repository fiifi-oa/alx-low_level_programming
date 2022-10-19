#include "main.h"

/**
 * print_to_98 - print to 98
 * @n: where to start
 *
 * Return: n
 */

void print_to_98(int n)
{
	for (; n >= 98; n++)
	{
		_putchar(n + '0');
		_putchar(',');
		_putchar(' ');


		if (n == 98)
			break;
	}
	_putchar('\n');
	return;
}
