#include "main.h"

/**
 * _isalpha - function to check for alphabetic character
 * @c: The character to check
 * Return: 1 if c is lowercase or uppercase letter
 * otherwise 0 is returned
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
		return (0);
}
