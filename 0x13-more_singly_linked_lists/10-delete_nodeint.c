#include "lists.h"

/**
 * delete_nodeint_at_index - a function that deletes
 * the node at  index index of a listint_t linked list
 * @head: pointer to head
 * @index: index of the list where the new node should be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *emp, *dup = *head;
	unsigned int node = 0;

	if (dup == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		*head = (*head)->next;
		free(dup);
		return (1);
	}
	while (node < (index - 1))
	{
		if (dup->next == NULL)
		{
			return (-1);
		}
		dup = dup->next;
		node++;
	}
	emp = dup->next;
	dup->next = emp->next;
	free(emp);
	return (1);
}
