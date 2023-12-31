#include <stdio.h>

/**
 * main - Print the first 50 fibonacci numbers.
 * Return: 0 Always.
 */

int main(void)
{
	long i, n, m, r;

	n = 1;
	m = 2;
	printf("%ld, %ld, ", n, m);

	for (i = 2; i < 50; i++)
	{
		r = n + m;
		printf("%ld", r);
		if (i != 49)
		{
			printf(", ");
		}
		n = m;
		m = r;
	}
	putchar('\n');
	return (0);
}
