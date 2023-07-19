#include "function_pointers.h"
#include <stddef.h>

/**
 * int_index - a function that searches for an integer
 * @array: array name
 * @size: array size
 * @cmp: pointer to function
 *
 * Return: Nothing
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int index = 0;

	if (array == NULL || cmp == NULL || size <= 0)
	{
		return (-1);
	}
	while (index < size)
	{
		if (cmp(array[index]) != 0)
		{
			return (index);
		}
		index++;
	}
	return (-1);
}
