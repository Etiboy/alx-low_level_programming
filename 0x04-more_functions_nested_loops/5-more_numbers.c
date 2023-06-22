#include "main.h"

/**
 * more_numbers  - function that prints numbers
 *
 * Return: 0 success
 */

void more_numbers(void)
{
	int r = 0, n;

	while (r < 10)
	{
		n = 0;
		while (n <= 14)
		{
			if (n > 9)
			{
				_putchar(n / 10 + '0');
			}
			_putchar(n % 10 + '0');
			n++;
		}
		_putchar('\n');
		r++;
	}
}
