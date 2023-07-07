#include "main.h"

/**
 * _islower - function to for lowercase character
 * @c: The character to check
 * Return: 1 if c is lowercase
 * otherwise 0 is returned
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
