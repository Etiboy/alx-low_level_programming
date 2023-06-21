#include "main.h"

/**
 * times_table - function to print 9 times table
 *
 * Return: 0 success
 */

void times_table(void)
{
	int r = 0, c;

	while (r < 10)
	{
		_putchar('0');

		c = 1;
		while (c < 10)
		{
			_putchar(',');
			_putchar(' ');

			if ((r * c) < 10)
			{
				_putchar(' ');
			}
			else
			{
				_putchar((r * c) / 10 + '0');
			}
			_putchar((r * c) % 10 + '0');
			c++;
		}
		_putchar('\n');
		r++;
	}
}
