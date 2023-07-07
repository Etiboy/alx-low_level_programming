#include "main.h"

/**
 * _memset - a function that fills memory with a constant byte
 * @s: The pointer to char
 * @b: The character
 * @n: The integer
 *
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a = 0;

	while (a < n)
	{
		s[a] = b;
		a++;
	}
	return (s);
}
