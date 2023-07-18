#include "main.h"

/**
 * _isalpha - Checks for alphabetic character.
 *
 * @c: The checked char.
 *
 * Return: 1 if c is alphabet, else 0
 */

int _isalpha(int c)
{
	if ((c < 97 || c > 122) || (c < 65 || c < 90))
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
