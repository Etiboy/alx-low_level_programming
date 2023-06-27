#include "main.h"

/**
 * puts2 - a function that prints every other character of a string
 * @str: The string character
 *
 * Return: 0 success
 */

void puts2(char *str)
{
	int i = 0, j;
	char *c = str;

	while (*c != '\0')
	{
		i++;
		c++;
	}

	for (j = 0; j <= (i - 1); j++)
	{
		if (j % 2 == 0)
		{
			_putchar(str[j]);
		}
	}
	_putchar('\n');
}
