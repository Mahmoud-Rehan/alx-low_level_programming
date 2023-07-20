#include "main.h"

/**
 * print_times_table - Prints the n times table, starting with 0.
 * 
 * @n: The number of times.
 */

void print_times_table(int n)
{
	int i, j;

	if (n > 0 || n < 15)
	{
		for (i = 0; i < n + 1; i++)
		{
			for (j = 0; j < n +1; j++)
			{
				if (j * i < 10 && j * i >= 0)
				{
					if (j != 0)
					{
						_putchar(',');
						_putchar(' ');
						_putchar(' ');
						_putchar(' ');
						_putchar((j * i) + '0');
					}
				}
				else if (j * i < 100 && j * i >= 10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(((j * i) / 10) + '0');
					_putchar(((j * i) % 10) + '0');
				}
				else if (j * i >= 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(((j * i) / 100) + '0');
					_putchar((((j * i) / 10) % 10) + '0');
					_putchar(((j * i) % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
}
