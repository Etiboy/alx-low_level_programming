#include "main.h"

/**
 * _strncpy - a function that copies a string
 * @dest: The first character
 * @src: The second character
 * @n: The integer
 *
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int a = 0;

	while (a < n && src[a] != 0)
	{
		dest[a] = src[a];
		a++;

	}

	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}
	return (dest);
}
