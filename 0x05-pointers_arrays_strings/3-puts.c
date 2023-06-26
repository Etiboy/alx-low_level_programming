#include "main.h"

/**
 * _puts - a function that prints a string
 * @str: The string character
 *
 * Return: 0 success
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
