#include "main.h"

/**
 * print_most_numbers -  prints the numbers except for 2 and 4.
 */

void print_most_numbers(void)
{
	int n;

	for (n = 48; n <= 57; n++)
	{
		if (n != 52 && n != 54)
		{
			_putchar(n);
		}
		_putchar('\n');
	}
}
