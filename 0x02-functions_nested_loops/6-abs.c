#include "main.h"
/**
 * _abs - Return the absolute value.
 *
 * @n: The checked integer.
 *
 * Return: 0 or 1 or +n
 */

int _abs(int n)
{
	if (n == 0)
	{
		return (0);
	}
	else if (n < 0)
	{
		return (+n);
	}
	else
	{
		return (n);
	}
}
