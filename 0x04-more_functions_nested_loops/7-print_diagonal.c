#include "main.h"

/**
 * print_diagonal - function that draws diagonal line
 *@n: The integer
 *
 * Return: 0 success
 */

void print_diagonal(int n)
{
	int l, s;

	if (n > 0)
	{
		l = 0;
		while (l < n)
		{
			s = 0;
			while (s < n)
			{
				if (s < l)
				{
					_putchar(' ');
				}
				else if (s == l)
				{
					_putchar('\\');
				}
				s++;
			}
			_putchar('\n');
			l++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
