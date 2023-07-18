#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_dog -  a function that free
 * @d: dog to free
 *
 * Return: 0 success
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		return;
	}

	free(d->name);
	free(d->owner);
	free(d);
}
