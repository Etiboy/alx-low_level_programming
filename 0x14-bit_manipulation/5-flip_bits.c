#include "main.h"
#include <stddef.h>

/**
 * flip_bits - a function that returns the number of bits you
 * would need to flip to get from one number to another
 * @n: decimal number
 * @m: decimal number
 *
 * Return: number of flipped bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x = n ^ m, num = 0;

	while (x > 0)
	{
		num += (x & 1);
		x >>= 1;
	}
	return (num);
}
