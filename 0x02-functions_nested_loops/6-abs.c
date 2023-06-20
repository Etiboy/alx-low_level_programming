#include "main.h"

/**
 * _abs - function to compute absolute value
 * @number: the integer as argument
 * Return: to argrument if number is greater than or equal to 0
 * otherwise it is negative
 */

int _abs(int number)
{
	if (number >= 0)
	{
		return (number);
	}
	else
	{
		return (-number);
	}
}
