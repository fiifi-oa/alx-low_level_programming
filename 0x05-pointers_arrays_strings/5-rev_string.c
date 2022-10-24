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

	while (s[i] != '\0')
		i++;

	for (c = 0; c < i; c++)
	{
		i--;
		rev = s[c];
		s[c] = s[i];
		s[i] = rev;
	}
}
