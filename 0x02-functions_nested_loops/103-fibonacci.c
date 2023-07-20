#include <stdio.h>

/**
 * main - Prints the sum of the even-valued terms
 * Return: 0 Always
 */

int main(void)
{
	long n, m, r, sum;

	m = 1;
	r = n = sum = 0;
	while (sum < 4000000)
	{
		r = m + n;
		if (r % 2 == 0)
		{
			sum = sum + r;
		}
	}
	printf("%ld\n", sum);
	return (0);
}
