#include "main.h"

/**
 * flip_bits - Get number of bits needed to flip from one number to another.
 * @n: Number.
 * @m: Number.
 * Return: j.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i;
	int j = 0;
	unsigned long int num1;
	unsigned long int num2;

	num2 = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		num1 = num2 >> i;

		if (num1 & 1)
		{
			j++;
		}
	}

	return (j);

}
