#include "main.h"

/**
 * binary_to_uint - Converts a binary to an unsigned int.
 * @b: String.
 * Return: Unsigned int.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0;
	int i = 0;

	if (b == NULL)
		return (0);

	while (b[i] != '\0')
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		n = (b[i] - '0') + n * 2;
		i++;
	}

	return (n);
}
