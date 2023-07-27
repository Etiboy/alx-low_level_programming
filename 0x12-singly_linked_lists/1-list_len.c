#include "lists.h"

/**
 * list_len - a function that returns the number
 * of elements in a linked list_t list
 * @h: list
 *
 * Return: sum of elements
 */

size_t list_len(const list_t *h)
{
	size_t elem = 0;

	while (h)
	{
		elem++;
		h = h->next;
	}
	return (elem);
}
