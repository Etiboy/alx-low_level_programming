#include "main.h"

/**
 * string_toupper - a function that changes all lowercase
 * letters of a string to uppercase
 * @n: The array
 *
 * Return: 0 success
 */

char *string_toupper(char *n)
{
	int i = 0;

	while (n[i] != '\0')
	{
		if (n[i] >= 'a' && n[i] <= 'z')
		{
			n[i] = n[i] - 32;
		}
		i++;

	}
	return (n);
}
