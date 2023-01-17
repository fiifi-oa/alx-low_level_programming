#include "main.h"

/**
 * _isalpha - checks for alphabet
 * @c: - character to be checcked
 *
 * Return: 0 if false, 1 if true
 */


int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
