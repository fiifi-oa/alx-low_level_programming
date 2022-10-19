#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: number to be checked
 *
 * Return: last digit
 */

int print_last_digit(int n)
{
	int ld, lp;

	ld = (n % 10);
	if (ld < 0)
		ld += -1;

	lp = '0' + ld;
	_putchar(lp);

	return (0);
}
