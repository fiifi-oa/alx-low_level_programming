#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: number to be checked
 *
 * Return: last digit
 */

int print_last_digit(int n)
{
	int ld;

	ld = ((n % 10) + '0');

	return (ld);
}
