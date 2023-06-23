#include "main.h"

/**
 * print_number - function that prints number
 * @n: The integer
 *
 * Return: 0 success
 */

void print_number(int n)
{
	unsigned int num;

	if (n < 0)
	{
		num = -n;
		_putchar('-');
	}
	else
	{
		num = n;
	}

	if ((num / 10) > 0)
	{
		print_number(num / 10);
	}
	_putchar(num % 10 + '0');
}
