#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - a function that returns the sum of all its parameters
 * @n: integer constant
 *
 * Return: sum of all parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list nums;
	unsigned int index;
	int sum = 0;

	if (n == 0)
	{
		return (0);
	}

	va_start(nums, n);

	for (index = 0; index < n; index++)
	{
		sum += va_arg(nums, int);
	}

	va_end(nums);
	return (sum);
}
