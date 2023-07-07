#include "main.h"

/**
 * _strspn - a function that locates a character in a string
 * @s: The first pointer to char
 * @accept: The second pointer to char
 *
 * Return: s or NULL
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int a = 0;
	int b;

	while (*s)
	{
		for (b = 0; accept[b]; b++)
		{
			if (*s == accept[b])
			{
				a++;
				break;
			}
			else if (accept[b + 1] == '\0')
			{
				return (a);
			}
		}
		s++;
	}
	return (a);
}
