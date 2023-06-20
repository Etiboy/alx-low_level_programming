#include "main.h"

/**
 * main - Print _putchar
 *
 * Return: Alway 0 Success
 */
int main(void)
{
	char word_array[8] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(word_array[i]);
	}
	_putchar('\n');
	return (0);
}
