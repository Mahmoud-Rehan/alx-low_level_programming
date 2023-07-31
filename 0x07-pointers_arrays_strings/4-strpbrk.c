#include "main.h"

/**
 * _strpbrk - Searches a string for any of a set of bytes.
 * @s: The string.
 * @accept: The string of chars.
 * Return: The string s or 0.
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] >= '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (s);
			}
		}
	}

	return ('\0');
}
