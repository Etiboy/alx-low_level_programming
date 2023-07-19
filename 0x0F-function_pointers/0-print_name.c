#include "function_pointers.h"

/**
 * print_name - a function that prints a name
 * @name: string of name
 * @f: pointer to function
 *
 * Return: Nothing
 */

void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
