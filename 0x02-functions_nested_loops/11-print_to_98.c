#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - function to print to 98
 * @n: The integer to print
 *
 * Return: result
 */

void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
		printf("%d\n", n);
	}
	else
	{
		while (n > 98)
		{
			printf("%d, ", n);
			n--;
		}
		printf("%d\n", n);
	}
}
