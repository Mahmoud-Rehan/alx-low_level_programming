#include "main.h"

/**
 * _isdigit - checks for a digit.
 * @c: the checked integer.
 * Return: 0 or 1
 */

int _isdigit(int c)
{
	if (c >= 48 && <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
