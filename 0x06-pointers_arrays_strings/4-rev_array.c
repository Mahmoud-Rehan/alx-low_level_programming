#include "main.h"

void reverse_array(int *a, int n)
{
	int i = n;

	while (i >= 0)
	{
		if (i != n)
		{
			_putchar(',');
			_putchar(' ');
		}
		_putchar(a[i]);
	}
	_putchar('\n');
}
