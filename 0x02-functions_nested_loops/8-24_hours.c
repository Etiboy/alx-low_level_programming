#include "main.h"

/**
 * jack_bauer - function to print every minute of day
 *
 * Return: 0 success
 */

void jack_bauer(void)
{
	int h = 0, m;

	while (h < 24)
	{
		m = 0;
		while (m < 60)
		{
			_putchar(h / 10 + '0');
			_putchar(h % 10 + '0');
			_putchar(':');
			_putchar(m / 10 + '0');
			_putchar(m % 10 + '0');
			_putchar('\n');
			m++;
		}
		h++;
	}
}
