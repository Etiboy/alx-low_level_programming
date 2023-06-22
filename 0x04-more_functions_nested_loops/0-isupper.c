#include "main.h"

/**
 * _isupper - function that checks for uppercase
 * @c: The integer character
 *
 * Return: 1 if	 it's uppercase
 * otherwise return 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

