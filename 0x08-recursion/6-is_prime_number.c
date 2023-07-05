#include "main.h"

int find_prime(int n, int i);

/**
 * is_prime_number - a function that returns 1 if the
 * input integer is a prime number, otherwise return 0
 * @n: The integer
 *
 * Return: 0 success
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (find_prime(n, n - 1));
}

/**
 * find_prime - a function that returns the prime number
 * @n: The first integer
 * @i: The second integer
 *
 * Return: 0 success
 */

int find_prime(int n, int i)
{
	if (i == 1)
	{
		return (1);
	}
	if (n % i == 0 && i > 0)
	{
		return (0);
	}
	return (find_prime(n, i - 1));
}
