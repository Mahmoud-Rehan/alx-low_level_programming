#include <stdio.h>

/**
 * main -  prints the largest prime factor of the number 612852475143.
 * Return: 0 Always.
 */

int main(void)
{
	unsigned long int n = 612852475143;
	long int m = 2, factor;

	while (n != 0)
	{
		if (n % div != 0)
		{
			div = div + 1;
		}
		else
		{
			factor = n;
			n = n / 2;
			if (n == 1)
			{
				printf("%lu\n", factor);
				break;
			}
		}
	}
	return (0);
}
