#include <stdio.h>

/**
 * main - Print alphabet
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char array_of_alphabet[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(array_of_alphabet[i]);
	}
	putchar('\n');
	return (0);
}
