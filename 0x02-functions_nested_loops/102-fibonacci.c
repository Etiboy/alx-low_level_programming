#include <stdio.h>

/**
 * main -Entry point
 *
 * Return: 0 success
 */

int main(void)
{
	int count = 0;
	unsigned long first = 0, second = 1, sum;

	while (count < 50)
	{
		sum = first + second;
		printf("%lu", sum);

		first = second;
		second = sum;

		if (count == 49)
		{
			printf("\n");
		}
		else
		{
			printf(", ");
		}
		count++;
	}
	return (0);
}
