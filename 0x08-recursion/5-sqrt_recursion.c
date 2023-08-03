#include "main.h"

int _sqrt(int n, int i);

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: the number.
 * Return: integer.
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (_sqrt(n, 0));
}

/**
 * _sqrt -  returns the natural square root of a number.
 * @n: the number.
 * @i: integer value.
 * Return: integer.
 */

int _sqrt(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}
	else if (i * i == n)
	{
		return (i);
	}
	return (_sqrt(n, i + 1));
}
