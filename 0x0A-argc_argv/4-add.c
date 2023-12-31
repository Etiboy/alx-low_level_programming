#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that adds positive numbers
 * @argc: argument count
 * @argv: array of strings
 *
 * Return: 0 success
 */

int main(int argc, char *argv[])
{
	int i, j, sum = 0;

	if (argc < 1)
	{
		printf("0\n");
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
