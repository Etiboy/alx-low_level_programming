#include "lists.h"

/**
 * free_listint2 - a function that that frees a listint_t list
 * @head: pointer to head
 *
 * Return: Nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *emp;

	if (head == NULL)
	{
		return;
	}
	while (*head)
	{
		emp = (*head)->next;
		free(*head);
		*head = emp;
	}

	head = NULL;
}
