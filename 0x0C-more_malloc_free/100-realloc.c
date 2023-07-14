#include "main.h"
#include <stdlib.h>

/**
 * _realloc - a function that reallocates a memory
 * block using malloc and free
 * @ptr: poniter to memory previously allocated
 * @old_size: size of allocated space
 * @new_size: new size of new memory block
 *
 * Return: pointer to newly created array or NULL if it fails
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *m;
	char *ptr_copy, *m_copy;
	unsigned int i;

	if (new_size == old_size)
	{
		return (ptr);
	}
	if (ptr == NULL)
	{
		m = malloc(new_size);
		if (m == NULL)
		{
			return (NULL);
		}
		return (m);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	ptr_copy = ptr;
	m = malloc(sizeof(*ptr_copy) * new_size);

	if (m == NULL)
	{
		free(ptr);
		return (NULL);
	}

	m_copy = m;

	for (i = 0; i < old_size && i < new_size; i++)
	{
		m_copy[i] = ptr_copy[i];
	}
	free(ptr);
	return (m);
}
