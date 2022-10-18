#include "main.h"

/**
 * print_alphabet_x10 - prints alphabets 10 times
 */

void print_alphabet_x10(void)
{
	int ten = 0;

	char al;

	if (ten <= 9)
	{
		for (al = 'a'; al <= 'z'; al++)
			_putchar(al);
		_putchar('\n');
	}
}
