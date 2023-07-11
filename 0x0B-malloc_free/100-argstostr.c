#include "main.h"
#include <stdlib.h>

/**
 * argstostr - a function that concatenates all the arguments of your program
 * @ac: Arguments count
 * @av: Array of pointer to char
 *
 * Return: pointer to str or NULL if it fails
 * or NULL if ac == 0 or av == NULL
 */

char *argstostr(int ac, char **av)
{
	char *str;
	int i, j, k, size = ac;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			size++;
		}
	}

	str = malloc(sizeof(char) * size + 1);

	if (str == NULL)
	{
		return (NULL);
	}

	k = 0;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			str[k] = av[i][j];
			k++;
		}
		str[k] = '\n';
		k++;
	}
	str[size] = '\0';
	return (str);
}
