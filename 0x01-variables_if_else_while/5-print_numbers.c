#include <stdio.h>

/**
 * main - Print numbers
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int number = 0;

	while (number <= 9)
	{
		printf("%d", number);
		number++;
	}
	putchar('\n');
	return (0);
}
