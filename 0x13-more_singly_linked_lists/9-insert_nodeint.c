#include "lists.h"

/**
 * insert_nodeint_at_index - a function that inserts a
 * new node at a given position
 * @head: pointer to head
 * @idx: index of the list where the new node should be added
 * @n: integer
 *
 * Return: address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *dup = *head;
	unsigned int node = 0;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}

	new->n = n;
	if (idx == 0)
	{
		new->next = dup;
		*head = new;
		return (new);
	}
	while (node < (idx - 1))
	{
		if (dup == NULL || dup->next == NULL)
		{
			return (NULL);
		}
		dup = dup->next;
		node++;
	}
	new->next = dup->next;
	dup->next = new;
	return (new);
}
