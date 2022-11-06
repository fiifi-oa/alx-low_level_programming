#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiply two numbers
 * @argc: number of arguments
 * @argv:  array of pointers to the arguments
 *
 * Return: 0 when true, 1 when error
 */

int main(int argc, char *argv[])
{
	int num1, num2, total = 0;

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	if (argc == 3)
	{
		total = num1 * num2;
		printf("%d\n", total);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
