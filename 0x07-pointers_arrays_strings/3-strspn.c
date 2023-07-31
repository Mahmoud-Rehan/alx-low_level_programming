#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: The string.
 * @accept: The string of chars.
 * Return: The n integer.
 */

unsigned int _strspn(char *s, char *accept)
{
	int j;
	unsigned int n = 0;

	while (*s)
	{
		for (j = 0; accept[j]; j++)
		{
			if (*s == accept[j])
			{
				n++;
				break;
			}
			else if (accept[j + 1] == '\0')
			{
				return (n);
			}
		}
		s++;
	}

	return (n);
}
