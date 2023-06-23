#include "main.h"

/**
 * print_square - function that prints square
 *@size: The integer
 *
 * Return: 0 success
 */

void print_square(int size)
{
	int r, c;

	if (size > 0)
	{
		r = 0;
		while (r < size)
		{
			c = 0;
			while (c < size)
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
