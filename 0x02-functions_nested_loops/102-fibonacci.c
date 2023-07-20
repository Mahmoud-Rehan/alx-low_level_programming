#include <stdio.h>

/**
 * main - Print the first 50 fibonacci numbers.
 * Return: 0 Always.
 */

int main(void)
{
	int i, n, m, r;
	
	n = 0;
	m = 1;
	printf("%d, %d, ", n, m);

	for (i = 0; i < 50, i++)
	{
		r = n + m;
		printf("%d, ", r);
		n = m;
		m = r
	}
	return (0);
}
