#include "main.h"

int check_palindrome(char *s, int i, int j);
int _strlen_recursion(char *s);

/**
 * is_palindrome - a function that returns 1 if
 * a string is a palindrome and 0 if not
 * @s: The ponter to char
 *
 * Return: 0 success
 */

int is_palindrome(char *s)
{
	if (*s == 0)
	{
		return (1);
	}
	return (check_palindrome(s, 0, _strlen_recursion(s)));
}

/**
 * check_palindrome - a function that check character
 * @s: The pointer to char
 * @i: The first integer
 * @j: The second integer
 *
 * Return: 0 success
 */

int check_palindrome(char *s, int i, int j)
{
	if (*(s + i) != *(s + j - 1))
	{
		return (0);
	}
	if (i >= j)
	{
		return (1);
	}
	return (check_palindrome(s, i + 1, j - 1));
}

/**
 * _strlen_recursion - a function that returns the string length
 * @s: The pointer to char
 *
 * Return: 0 success
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
