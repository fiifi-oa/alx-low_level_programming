#include <stdio.h>

/**
 * main - print lower case aphabets without q and e
 *
 * Return: always 0
 */

int main(void)
{
	char alp;


	do {
	for (alp = 'a'; alp <= 'z'; alp++)
	{
		putchar(alp);
	}
	} while (alp != 'e' || 'q');

	return (0);
}
