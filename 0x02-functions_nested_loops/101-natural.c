#include <stdio.h>

/**
 * main - Prints the sum of all the multiples of 3 or 5 below 1024.
 * Return: 0 Always.
 */

int main(void)
{
	int i, n;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			n = n + i;
		}
	}
	printf("%d\n", n);
	return (0);
}
