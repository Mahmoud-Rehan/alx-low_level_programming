#include <stdio.h>

/**
 * main - prints the first 98 Fibonacci numbers.
 * Return: 0 Always
 */

int main(void)
{
	unsigned long int, m, r;
	int i;

	n = 0;
	m = 1;
	r = 0;
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
	putchar('\n');
	return (0);
}
