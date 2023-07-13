#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - a function that concatenates two strings
 * @s1: first string character
 * @s2: second string character
 * @n: the integer
 *
 * Return: pointer to allocated memory or exit 98 if it fails
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i, len = n;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (i = 0; s1[i]; i++)
	{
		len++;
	}

	str = malloc(sizeof(char) * (len + 1));

	if (str == NULL)
	{
		return (NULL);
	}

	len = 0;

	for (i = 0; s1[i]; i++)
	{
		str[len] = s1[i];
		len++;
	}
	for (i = 0; s2[i] && i < n; i++)
	{
		str[len] = s2[i];
		len++;
	}
	str[len] = '\0';
	return (str);
}