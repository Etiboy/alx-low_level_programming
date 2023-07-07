#include "main.h"

/**
 * _strcpy - a function that copies the string pointed to
 *  by src, including the terminating null byte (\0), to
 *  the buffer pointed to by dest.
 * @dest: copy to
 * @src: copy from
 *
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0, j;

	while (*(src + i) != '\0')
	{
		i++;
	}

	for (j = 0; j < i; j++)
	{
		dest[j] = src[j];
	}

	dest[i] = '\0';
	return (dest);
}
