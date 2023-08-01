#include "lists.h"

/**
 * pop_listint - a function that deletes the head node of a
 * listint_t linked list, and returns the head node’s data (n)
 * @head: pointer to head
 *
 * Return: Head node's data
 */

int pop_listint(listint_t **head)
{
	listint_t *emp;
	int h;

	if (head == NULL)
	{
		return (0);
	}

	emp = *head;
	h = (*head)->n;
	*head = (*head)->next;
	free(emp);
	return (h);
}
