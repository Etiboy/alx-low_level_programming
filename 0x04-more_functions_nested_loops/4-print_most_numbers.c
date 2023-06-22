#include "main.h"

/**
 * print_most_numbers  - function that prints most numbers
 *
 * Return: 0 success
 */

void print_most_numbers(void)
{
	int n = 0;

	while (n <= 9)
	{
		if (n != 2 && n != 4)
		{
			_putchar(n + '0');
		}
		n++;
	}
	_putchar('\n');
}
