#include "main.h"

/**
 * factorial - returns the factorial of a given number.
 * @n: The given number.
 * Return: the factorial.
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 1 || n == 0)
	{
		return (1);
	}
	n = n * factorial(n - 1);
	return (n);
}
