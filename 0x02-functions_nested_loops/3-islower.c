#include "main.h"

/**
 * _islower -  checks for lower case
 *@c: The character to be checked.
 *
 *Return: 1 if true, 0 otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
