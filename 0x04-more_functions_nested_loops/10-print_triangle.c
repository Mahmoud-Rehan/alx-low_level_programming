#include "main.h"

/**
 * print_triangle - prints a triangle.
 * @size: the size of the triangle.
 */

void print_triangle(int size)
{
	int i, j, l;
	int n = size - 1;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < n; j++)
		{
			_putchar(' ');
		}
		for (l = n; l < size; l++)
		{
			_putchar('#');
		}
		n--;
		_putchar('\n');
	}
}
