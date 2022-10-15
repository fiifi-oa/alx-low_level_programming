#include <stdio.h>

/**
 * main - print alphabet in reverse
 *
 * Return: always 0
 */

int main(void)
{
	char cba;

	for (cba = 'z'; cba >= 'a'; cba--)
		putchar(cba);
	putchar('\n');

	return (0);
}
