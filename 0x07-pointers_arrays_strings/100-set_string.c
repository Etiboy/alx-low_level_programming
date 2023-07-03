#include "main.h"
#include <stdio.h>

/**
 * set_string - a function that sets the value of a pointer to a char.
 * @s: The double pointer
 * @to: The pointer to char
 *
 * Return: 0 success
 */

void set_string(char **s, char *to)
{
	*s = to;
}
