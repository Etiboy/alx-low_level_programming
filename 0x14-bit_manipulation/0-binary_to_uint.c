#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - a function that converts a binary number to an unsigned int
 * @b: pointer to a string of 0 and 1 chars
 *
 * Return: the converted number, or 0 if
 * there is one or more chars in the string b that is not 0 or 1
 * b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0, prod = 1;
	int size;

	if (b == NULL)
		return (0);
	for (size = 0; b[size];)
		size++;
	for (size -= 1; size >= 0; size--)
	{
		if (b[size] != '0' && b[size] != '1')
			return (0);
		num += (b[size] - '0') * prod;
		prod *= 2;
	}
	return (num);
}
