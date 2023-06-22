#include "main.h"

/**
 * print_numbers  - function that prints numbers
 *
 * Return: 0 success
 */

void print_numbers(void)
{
	int n = 0;

	while (n <= 9)
	{
		_putchar(n + '0');
		n++;
	}
	_putchar('\n');
}

