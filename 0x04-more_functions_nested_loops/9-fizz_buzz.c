#include <stdio.h>

/**
 * main - print numbers from 1 to 100.
 * Return: 0 Always
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
		{
			printf("Fizz");
		}

		if (i % 5 == 0)
		{
			printf("Buzz");
		}

		if (i % 3 != 0 && i % 5 != 0)
		{
			printf("%d", i);
		}

		if (i != 100)
		{
			putchar(' ');
		}
	}
	putchar('\n');
}
