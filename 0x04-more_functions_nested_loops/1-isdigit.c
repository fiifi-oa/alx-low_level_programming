#include "main.h"

/**
 * _isdigit - checks for digit 1  to 9
 * @c: character to be checked
 *
 * Return: 1 if true, 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);

	else
		return (0);
}
