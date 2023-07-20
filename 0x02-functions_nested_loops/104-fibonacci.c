#include <stdio.h>

/**
 * main - prints the first 98 Fibonacci numbers.
 * return: 0 Always
 */

int main(void)
{
	unsigned long n, m, r;
	int i;
	
	n = 0;
	m = 1;
	for (i = 0; i < 98; i++)
	{
		r = n + m;
		n = m;
		m = r;
		printf("%lu", r);
		if (i < 97)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}
