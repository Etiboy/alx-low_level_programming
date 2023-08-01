#include "lists.h"

/**
 * get_nodeint_at_index - a function that  returns the nth
 * node of a listint_t linked list
 * @head: pointer to head
 * @index: node index
 *
 * Return: nth node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node;

	node = 0;
	while (node < index)
	{
		if (head == NULL)
		{
			return (NULL);
		}
		head = head->next;
		node++;
	}
	return (head);
}
