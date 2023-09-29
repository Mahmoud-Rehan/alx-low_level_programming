#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: string.
 * Return: n or 0.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int n;
	int i;

	n = 0;

	if (b == NULL)
	{
		return (0);
	}

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] < '0' || b[i] > '1')
		{
			return (0);
		}

		n = 2 * n + (b[i] - '0');
	}

	return (n);
}
