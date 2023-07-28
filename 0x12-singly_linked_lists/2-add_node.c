#include "lists.h"

/**
 * add_node - a function that adds a new node at the beginning of a list_t list
 * @head: pointer to head
 * @str: string
 *
 * Return: address of new element or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	char *s;
	int l;
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}

	s = strdup(str);
	if (s == NULL)
	{
		free(new);
		return (NULL);
	}
	for (l = 0; str[l];)
	{
		l++;
	}

	new->str = s;
	new->len = l;
	new->next = *head;

	*head = new;
	return (new);
}
