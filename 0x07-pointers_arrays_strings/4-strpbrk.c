#include "main.h"

/**
 * _strpbrk - a function that searches a string for any of a set of bytes
 * @s: The first pointer to char
 * @accept: The second pointer to char
 *
 * Return: s or NULL
 */

char *_strpbrk(char *s, char *accept)
{
	int b;

	while (*s)
	{
		for (b = 0; accept[b]; b++)
		{
			if (*s == accept[b])
			{
				return (s);
			}
		}
		s++;
	}
	return ('\0');
}
