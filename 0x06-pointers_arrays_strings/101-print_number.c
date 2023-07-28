#include "main.h"

void print_number(int n)
{
	int i = 0;
	int j;
	int m;

	if (n < 0)
	{
		m = 1;
	}
	while (n / 10 > 0)
	{
		i++;
	}
	if (m)
	{
		_putchar('-');
	}

	for (j = 0; j < i; j++)
	{
		m *= 10;
	}

	while (m > 0)
	{
		_putchar(n / m);
		m = m / 10;
	}
	_putchar('\n');
}
