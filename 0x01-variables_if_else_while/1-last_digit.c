#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Determine if last digit of n is greater than 5,
 * equal to 0, or less than 6 and not 0.
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of %d ", n);
	if (n % 10 > 5)
	{
		printf("is %d and is greater than 5\n", n % 10);
	}
	else if (n % 10 == 0)
	{
		printf("is %d and is 0\n", n % 10);
	}
	else if (n % 10 < 6 && n % 10 != 0)
	{
		printf("is %d and is less than 6 and not 0\n", n % 10);
	}
	return (0);
}
