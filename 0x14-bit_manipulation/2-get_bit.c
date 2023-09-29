#include "main.h"

/**
 * get_bit - Get the value of a bit at a given index.
 * @n: The number.
 * @index: Index.
 * Return: -1 or num.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int num;

	if (index > 63)
	{
		return (-1);
	}

	num = (n >> index) & 1;

	return (num);
}
