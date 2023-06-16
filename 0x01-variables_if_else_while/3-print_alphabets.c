#include <stdio.h>

/**
 * main - Print alphabets
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char array_of_lower[26] = "abcdefghijklmnopqrstuvwxyz";
	char array_of_upper[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(array_of_lower[i]);
	}
	for (i = 0; i < 26; i++)
	{
		putchar(array_of_upper[i]);
	}
	putchar('\n');
	return (0);
}
