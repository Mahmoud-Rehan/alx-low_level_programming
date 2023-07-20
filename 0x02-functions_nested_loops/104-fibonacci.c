#include <stdio.h>

/**
 * main - prints the first 98 Fibonacci numbers.
 * return: 0 Always
 */

int main(void)
{
	unsigned long n, m, r;
	int i;
	
	n = 1;
	m = 2;
	printf("%lu, %lu, ", n, m);
	for (i = 2; i < 98; i++)
	{
		r = n + m;
		printf("%lu", r);
		n = m;
		m = r;
		if (i < 98)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}
