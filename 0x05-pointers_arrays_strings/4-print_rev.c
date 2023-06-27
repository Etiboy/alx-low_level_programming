#include "main.h"

/**
 * print_rev - a function that prints a string in reverse
 * @s: The string character
 *
 * Return: 0 success
 */

void print_rev(char *s)
{
	int i = 0, c;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	s--;

	for (c = i; c > 0; c--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
