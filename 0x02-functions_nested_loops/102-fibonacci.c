#include <stdio.h>

/**
 * main - Print the first 50 fibonacci numbers.
 * Return: 0 Always.
 */

int main(void)
{
	long i, n, m, r;
	
	n = 0;
	m = 1;
	printf("%ld, %ld, ", n, m);

	for (i = 0; i < 50; i++)
	{
		r = n + m;
		printf("%ld", r);
		if (i != 50)
		{
			printf(", ");
		}
		n = m;
		m = r;
	}
	return (0);
}
