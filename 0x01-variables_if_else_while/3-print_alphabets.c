#include <stdio.h>

/**
 * main - print alphabets in lower and upper case
 *
 * Return: always 0
 */

int main(void)
{
	char luc;

	for (luc = 'a'; luc <= 'z'; luc++)
	{
		putchar(luc);
	}
	for (luc = 'A'; luc <= 'Z'; luc++)
		putchar(luc);

	putchar('\n');


	return (0);
}
