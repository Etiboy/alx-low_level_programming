#include "lists.h"

/**
 * free_listint - a function that that frees a listint_t list
 * @head: pointer to head
 *
 * Return: Nothing
 */

void free_listint(listint_t *head)
{
	listint_t *emp;

	while (head)
	{
		emp = head->next;
		free(head);
		head = emp;
	}
}
