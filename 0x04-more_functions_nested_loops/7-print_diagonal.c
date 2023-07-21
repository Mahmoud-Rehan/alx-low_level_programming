#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n: the number of printed lines.
 */

void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = n - i; j < n; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
