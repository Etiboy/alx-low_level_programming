#include "main.h"
#include <stdlib.h>

/**
 * str_concat - a function that a function that concatenates two strings
 * @s1: The first string pointer
 * @s2: The second string pointer
 *
 * Return: pointer to str or NULL if it fails
 * or empty string if s1 and s2 = NULL
 */

char *str_concat(char *s1, char *s2)
{
	char *str;
	int i, j = 0, k = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (i = 0; s1[i] || s2[i]; i++)
	{
		j++;
	}

	str = malloc(sizeof(char) * j);

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i]; i++)
	{
		str[k] = s1[i];
		k++;
	}
	for (i = 0; s2[i]; i++)
	{
		str[k] = s2[i];
		k++;
	}
	return (str);
}
