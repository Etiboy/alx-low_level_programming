#include <stdio.h>

/**
 * main - Print combinations of three digits
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int number = 0;
	int first;
	int second;
	int third;

	while (number <= 789)
	{
		first = (number / 100 + '0');
		second = (number / 10  % 10 + '0');
		third = (number % 10 + '0');
		if (first < second && second < third)
		{
			putchar(first);
			putchar(second);
			putchar(third);
			if (number != 789)
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
