#include <stdio.h>

/**
 * main - prints the size of var type
 *
 * Return: 0 always true
 */

int main(void)
{
	char a;
	int b;
	long int c;
	long long int h;
	float k;

	printf("Size of a char: %d byte(s)\n", sizeof(a));
	printf("Size of an int: %d byte(s)\n", sizeof(b));
	printf("Size of a long int: %d byte(s)\n", sizeof(c));
	printf("Size of a long long int: %d byte(s)\n", sizeof(h));
	printf("Size of a float: %d byte(s)\n", sizeof(k));

	return (0);
}
