#include "main.h"

/**
 * _memcpy - a function that copies memory area
 * @dest: The first pointer to char
 * @src: The second pointer to char
 * @n: The integer
 *
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a = 0;

	while (a < n)
	{
		dest[a] = src[a];
		a++;
	}
	return (dest);
}
