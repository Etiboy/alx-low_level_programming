#include "main.h"
#include <stdlib.h>

/**
 * array_range - a function that creates an array of integers
 * @min: minimum index
 * @max: maximum index
 *
 * Return: pointer to newly created array or NULL if it fails
 */

int *array_range(int min, int max)
{
	int *array, i, size;

	if (min > max)
	{
		return (NULL);
	}

	size = max - min + 1;
	array = malloc(sizeof(int) * size);

	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		array[i] = min;
		min++;
	}

	return (array);
}
