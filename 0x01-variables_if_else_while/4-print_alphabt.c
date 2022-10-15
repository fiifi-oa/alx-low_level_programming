#include <stdio.h>

/**
 * main - print lower case aphabets without q and e
 *
 * Return: always 0
 */

int main(void)
{
	char alp;

	for (alp = 'a'; alp <= 'z'; alp++)
	{
		do putchar(alp);
		while (alp != 'e' || 'q');
	}

	return (0);
}
