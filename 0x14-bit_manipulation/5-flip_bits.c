#include "main.h"

/**
 * clear_bit - a function that sets the value of a bit to 1 at a given index
 * @n: first number
 * @m: second number
 *
 * Return:  the number of bits to flip to get from one number to another
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int num = 0, xor = n ^ m;

	while (xor > 0)
	{
		num += (xor & 1);
		xor >>= 1;
	}
	return (num);
}
