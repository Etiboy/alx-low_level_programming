#include <stdio.h>

/**
 * main - Print combinations of two
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int number = 0;
	int first;
	int second;

	while (number <= 89)
	{
		first = (number / 10 + '0');
		second = (number % 10 + '0');
		if (first < second)
		{
			putchar(first);
			putchar(second);
			if (number != 89)
			{
				putchar(',');
				putchar(' ');
			}
		}
		number++;
	}

	putchar('\n');
	return (0);
}
