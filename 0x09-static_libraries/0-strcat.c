#include "main.h"

/**
 * _strcat - a function that concatenates two strings
 * @dest: The first character
 * @src: The second character
 *
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int a = 0, b = 0;

	while (dest[a] != '\0')
	{
		a++;
	}

	while (src[b] != '\0')
	{
		dest[a] = src[b];
		b++;
		a++;
	}

	return (dest);
}
