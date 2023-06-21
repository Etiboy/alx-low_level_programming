#include "main.h"

/**
 * print_times_table - function to print to times table
 * @n: The integer
 *
 * Return: result
 */

void print_times_table(int n)
{
	int r = 0, c;

	if (n >= 0 && n <= 15)
	{
		while (r <= n)
		{
			_putchar('0');

			c = 1;
			while (c <= n)
			{
				_putchar(',');
				_putchar(' ');
				if ((r * c) < 100)
				{
					_putchar(' ');
				}
				if ((r * c) < 10)
				{
					_putchar(' ');
				}
				if ((r * c) >= 100)
				{
					_putchar((r * c) / 100 + '0');
					_putchar((r * c) / 10 % 10 + '0');
				}
				else if ((r * c) >= 10 && (r * c) < 100)
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
}
