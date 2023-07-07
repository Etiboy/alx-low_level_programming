#include "main.h"

/**
 * _strncat - a function that concatenates two strings
 * @dest: The first character
 * @src: The second character
 * @n: The integer
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int a = 0, b = 0;

	while (dest[a] != '\0')
	{
		a++;
	}

	while (src[b] != '\0' && b < n)
	{
		dest[a] = src[b];
		b++;
		a++;
	}

	return (dest);
}
