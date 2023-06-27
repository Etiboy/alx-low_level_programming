#include "main.h"

/**
 * puts_half - a function that prints half of a string
 * @str: The string character
 *
 * Return: 0 success
 */

void puts_half(char *str)
{
	int i = 0, n, c;

	for (c = 0; str[c] != '\0'; c++)
	{
		i++;
	}

	if (i % 2 == 0)
	{
		n = i / 2;
	}
	else
	{
		n = (i + 1) / 2;
	}

	for (c = n; str[c] != '\0'; c++)
	{
		_putchar(str[c]);
	}
	_putchar('\n');
}
