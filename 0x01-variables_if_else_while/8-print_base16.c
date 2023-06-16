#include <stdio.h>

/**
 * main - Print base 16 numbers
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int number = 0;
	char letter = 'a';

	while (number <= 9)
	{
		putchar(number + '0');
		number++;
	}
	while (letter <= 'f')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');
	return (0);
}
