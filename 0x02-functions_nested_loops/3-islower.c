#include "main.h"

/**
 * _islower - Checks for lowercase characters.
 *
 * @c: the checked char
 *
 * Return: 1 if lowercse, else 0
 */

int _islower(int c)
{
	if (c < 97 || c > 122)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
