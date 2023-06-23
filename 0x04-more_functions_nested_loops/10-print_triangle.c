#include "main.h"

/**
 * print_triangle - function that prints triangle
 *@size: The integer
 *
 * Return: 0 success
 */

void print_triangle(int size)
{
	int r, c;

	if (size > 0)
	{
		r = 1;
		while (r <= size)
		{
			c = r;
			while (c < size)
			{
				_putchar(' ');
				c++;
			}

			c = 1;
			while (c <= r)
			{
				_putchar('#');
				c++;
			}
			_putchar('\n');
			r++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
