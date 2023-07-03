#include "main.h"

/**
 * _strstr - a function that locates a substring
 * @haystack: The first pointer to char
 * @needle: The second pointer to char
 *
 * Return: substring or NULL
 */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *h = haystack;
		char *n = needle;

		while (*h == *n && *n != '\0')
		{
			h++;
			n++;
		}
		if (*n == '\0')
		{
			return (haystack);
		}
		haystack++;
	}
	return ('\0');
}
