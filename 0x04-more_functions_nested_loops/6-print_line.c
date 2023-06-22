#include "main.h"

/**
 * print_line - function that draws straight line
 *@n: The integer
 *
 * Return: 0 success
 */

void print_line(int n)
{
	int l;

	if (n > 0)
	{
		l = 0;
		while (l < n)
		{
			_putchar('_');
			l++;
		}
	}
	_putchar('\n');
}
