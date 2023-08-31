#include "main.h"

/**
 * print_binary - Convert decimal to binary;
 * @n: The number;
 */

void print_binary(unsigned long int n)
{
	int i = 70;
	int j = 0;
	unsigned int b;

	while (i >= 0)
	{
		b = n >> i;
		if (b & 1)
		{
			_putchar('1');
			j++;
		}
		else if (j)
			_putchar('0');
		i--;
	}
	if (!j)
		_putchar('0');
}
