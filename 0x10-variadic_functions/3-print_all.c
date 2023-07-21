#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>

/**
 * print_all- a function that prints anything
 * @format: list of types of arguments passed to the function
 *
 * Return: Nothing
 */

void print_all(const char * const format, ...)
{
	va_list list;
	char *str, *sep = "";
	int index = 0;

	va_start(list, format);

	if (format)
	{
		while (format[index])
		{
			switch (format[index])
			{
				case 'c':
					printf("%s%c", sep, va_arg(list, int));
					break;
				case 'i':
					printf("%s%d", sep, va_arg(list, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(list, double));
					break;
				case 's':
					str = va_arg(list, char *);
					if (!str)
					{
						str = "(nil)";
					}
					printf("%s%s", sep, str);
					break;
				default:
					index++;
					continue;
			}
			sep = ", ";
			index++;
		}
	}
	printf("\n");
	va_end(list);
}
