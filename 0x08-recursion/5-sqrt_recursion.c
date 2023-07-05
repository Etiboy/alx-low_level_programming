#include "main.h"

int find_sqrt(int x, int i);

/**
 * _sqrt_recursion - a function that returns
 * the natural square root of a number
 * @n: The integer
 *
 * Return: 0 success
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (find_sqrt(n, 0));
}

/**
 * find_sqrt - a function that returns the natural square root of a number
 * @n: The first integer
 * @i: The second integer
 *
 * Return: 0 success
 */

int find_sqrt(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}
	if (i * i == n)
	{
		return (i);
	}
	return (find_sqrt(n, i + 1));
}
