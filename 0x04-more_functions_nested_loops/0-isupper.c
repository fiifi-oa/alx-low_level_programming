#include "main.h"

/**
 * _isupper - - checks for uppercase
 * @c: character to be checked
 *
 * Return: 1 if true, 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);

	else
		return (0);
}