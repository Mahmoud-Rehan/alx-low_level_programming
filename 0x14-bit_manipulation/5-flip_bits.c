#include "main.h"

/**
 * flip_bits - Count the flips.
 * @n: The number.
 * @m: The second number.
 * Return: Count.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i;
	unsigned int count = 0;
	unsigned long int j, r;

	r = n ^ m;

	i = 63;
	while (i >= 0)
	{
		j = r >> i;
		if (j & 1)
			count++;
		i--;
	}
	return (count);
}
