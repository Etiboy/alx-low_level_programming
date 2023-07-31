#include "lists.h"

/**
 * add_nodeint_end - a function that adds a new node at
 * the end of a listint_t list
 * @head: pointer to head
 * @n: integer
 *
 * Return: address of new element or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *end;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		end = *head;
		while (end->next != NULL)
		{
			end = end->next;
		}
		end->next = new;
	}
	return (*head);
}
