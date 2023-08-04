#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - a function that converts a binary number to an unsigned int
 * @b: pointer to a string of 0 and 1 chars
 *
 * Return: converted number or 0 if there is one or more chars in
 * the string b that is not 0 or 1, b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int index;

	if (b == NULL)
		return (0);

	for (index = 0; b[index]; index++)
	{
		if (b[index] != '0' && b[index] != '1')
			return (0);
		num = 2 * num + (b[index] - '0');
	}
	return (num);
}
