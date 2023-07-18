#include <ctype.h>
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
	if (isalpha(c))
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
