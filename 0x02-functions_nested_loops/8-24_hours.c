#include "main.h"

/**
 * jack_bauer - print every minute of the day
 *
 * Return: void
 */

void jack_bauer(void)
{
	int h0, h1;
	int min0, min1;

	for (h0 = 0; h0 < 3; h0++)
	{
		for (h1 = 0; h1 < 10; h1++)
		{
			for (min0 = 0; min0 < 6; min0++)
			{
				for (min1 = 0; min1 < 10; min1++)
				{
					_putchar(h0 + '0');
					_putchar(h1 + '0');
					_putchar(':');
					_putchar(min0 + '0');
					_putchar(min1 + '0');
					_putchar('\n');

					if (h0 == 2 && h1 == 3 && min0 == 5 && min1 == 9)
						return;
				}
			}
		}
	}
}
