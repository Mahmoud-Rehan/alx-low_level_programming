#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Print alphabets accept for q and e.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		if (i != 101 && i != 113)
		{
			putchar(i);
		}
	}
	putchar('\n');
	return (0);
}
