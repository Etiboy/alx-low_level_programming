#include "main.h"
#include <stdlib.h>

/**
 * _strdup - a function that  returns a pointer to a newly allocated space
 * in memory, which contains a copy of the string given as a parameter
 * @str: string pointer
 *
 * Return: pointer to array or NULL if it fails or NULL if size = 0
 */

char *_strdup(char *str)
{
	char *duplicate;
	int i, j = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i]; i++)
	{
		j++;
	}

	duplicate = malloc(sizeof(char) * (j + 1));

	if (duplicate == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i]; i++)
	{
		duplicate[i] = str[i];
	}
	duplicate[j] = '\0';
	return (duplicate);
}
