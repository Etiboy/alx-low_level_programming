#include "main.h"

/**
 * reverse_array - a function that  reverses the content of array of integers
 * @a: The array
 * @n: The number of elements of array
 *
 * Return: 0 success
 */

void reverse_array(int *a, int n)
{
	int i, j;

	for (i = 0; i < n--; i++)
	{
		j = a[i];
		a[i] = a[n];
		a[n] = j;
	}
}
