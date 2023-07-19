#include "function_pointers.h"
#include <stddef.h>

/**
 * print_name - a function that prints a name
 * @name: string of name
 * @f: pointer to function
 *
 * Return: Nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}
	f(name);
}
