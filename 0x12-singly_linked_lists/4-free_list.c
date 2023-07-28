#include "lists.h"

/**
 * free_list - a function that that frees a list_t list
 * @head: pointer to head
 *
 * Return: Nothing
 */

void free_list(list_t *head)
{
	list_t *emp;

	while (head)
	{
		emp = head->next;
		free(head->str);
		free(head);
		head = emp;
	}
}
