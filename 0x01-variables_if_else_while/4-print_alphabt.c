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
		if (alp != 'e' && alp != 'q')
			putchar(alp);
	}
	putchar('\n');

	return (0);
}
