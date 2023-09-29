#include "main.h"

/**
 * clear_bit - Sets the value of a bit to 0 at a given index.
 * @n: The number pointer.
 * @index: The Index.
 * Return: 1 or -1.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	{
		return (-1);
	}

	*n = ~(1 << index) & *n;

	return (1);
}
