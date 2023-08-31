#include "main.h"

/**
 * get_bit - Find the value of a bit.
 * @n: Number.
 * @index: The bit index.
 * Return: i or (-1).
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int i;

	if (index > 63)
		return (-1);

	i = n >> index;

	return (i & 1);
}
