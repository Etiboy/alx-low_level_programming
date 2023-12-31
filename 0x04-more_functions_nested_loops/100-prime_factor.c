#include <stdio.h>
#include <math.h>

/**
 * main - Entry point
 *
 * Return: Always 0.
 */
int main(void)
{
	long int n = 612852475143, max = -1, i;

	while (n % 2 == 0)
	{
		max = 2;
		n /= 2;
	}

	for (i = 3; i <= sqrt(n); i += 2)
	{
		while (n % i == 0)
		{
			max = i;
			n /= i;
		}
	}

	if (n > 2)
	{
		max = n;
	}
	printf("%ld\n", max);
	return (0);
}
