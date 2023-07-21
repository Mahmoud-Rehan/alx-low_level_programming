#include "main.h"

/**
 * print_line - draws a straight line in the terminal.
 * @n: the number of lines.
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (n < 1)
		{
			_putchar('\n');
			break;
		}
		_putchar('_');
	}
}