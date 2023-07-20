#include <stdlib.h>
#include <stdio.h>

/**
 * main - entry point
 * @argc: argument count
 * @argv: array of argument
 *
 * Return: 0 success
 */

int main(int argc, char *argv[])
{
	int byte, index;
	char *array;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	byte = atoi(argv[1]);

	if (byte < 0)
	{
		printf("Error\n");
		exit(2);
	}

	array = (char *)main;
	index = 0;

	while (index < byte)
	{
		if (index == byte - 1)
		{
			printf("%02hhx\n", array[index]);
			break;
		}
		printf("%02hhx ", array[index]);
		index++;
	}
	return (0);
}
