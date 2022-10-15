#include <stdio.h>

/**
 * main -  print numbers in base 16
 *
 * Return: always 0
 */

int main(void)
{
	int bsix;
	char basix;

	for (bsix = 0;  bsix < 10; bsix++)
		putchar (bsix % 10 + '0');

	for (basix = 'a'; basix <= 'f'; basix++)
		putchar(basix);

	putchar('\n');

	return (0);
}
