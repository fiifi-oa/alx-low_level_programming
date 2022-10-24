#include "main.h"

/**
 * rev_string - reverse a string
 * @s: string
 */

void rev_string(char *s)
{
	int i = 0;
	char rev = s[0];

	int c;

	while (s[i] != '\n')
		i++;

	for (c = 0; c < i; c++)
	{
		i--;
		rv = s[c];
		s[c] = s[i];
		s[i] = rv;
	}
}
