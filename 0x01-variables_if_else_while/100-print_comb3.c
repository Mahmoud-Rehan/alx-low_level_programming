#include <stdio.h>

/**
 * main - Prints all possible different combinations of two digits.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;
	int i;

	for (i = 48; i < 57; i++)
	{
		for (n = 49; n <= 57; n++)
		{
			if (n != i && n > i)
			{
				putchar(i);
				putchar(n);
				if (i != 56 || n != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
