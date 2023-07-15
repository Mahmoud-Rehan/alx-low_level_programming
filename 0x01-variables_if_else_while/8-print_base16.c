#include <stdio.h>

/**
 * main - Print all numbers of base 16 in lowercase.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n = 0;

	while (n < 16)
	{
		printf("%x", n / 16);
	}
	putchar('\n');
	return (0);
}
