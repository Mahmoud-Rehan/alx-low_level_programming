#include <stdio.h>
#include "main.h"

/**
 * print_array -  Prints n elements of an array of integers.
 * @a: The array of integers
 * @n: The length of the array
 * Return: 0 Always.
 */

void print_array(int *a, int n)
{
	int i = 0;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		_putchar(',');
		_putchar(' ');
	}
	_putchar('\n');
}
