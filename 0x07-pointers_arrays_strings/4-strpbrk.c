#include "main.h"

/**
 * _strbrk - Searches a string for any of a set of bytes.
 * @s: The string.
 * @accept: The string of chars.
 * Return: The string s or 0.
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
		s++;
	}

	return ('\0');
}
