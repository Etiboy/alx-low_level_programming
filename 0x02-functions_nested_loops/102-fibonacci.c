#include <stdio.h>

/**
 * main -Entry point
 *
 * Return: 0 success
 */

int main(void)
{
	int first = 1, second = 2, next;

	while (first <= 50)
	{
		printf("%d", first);
		if (first != 34)
		{
			printf(", ");
		}
		else
		{
			printf("\n");
		}

		next = first + second;
		first = second;
		second = next;
	}
	return (0);
}
