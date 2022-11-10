#include "main.h"

/**
 * _abs -  computes absolute value
 * @n: number to be checked
 *
 * Return: absolute value
 */

int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		n *= -1;
		return (n);
	}
}
