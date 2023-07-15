#include <stdio.h>

/*
 * main - Print all possible different combinations of three digits.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	int j;
	int n;

	for (i = 48; i < 56; i++)
	{
		for (j = 49; j < 57; j++)
		{
			for (n = 50; n <= 57; n++)
			{
				putchar(i);
				putchar(j);
				putchar(n);
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
