#include "main.h"

/**
 * _isdigit - function that checks for digit
 * @c: The integer
 *
 * Return: 1 if	 it's digit
 * otherwise return 0
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

