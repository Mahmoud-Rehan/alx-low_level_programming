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
	char c = 'a';

	while (c <= 'z')
	{
		if (c != 'q' && c != 'e')
		{
			putchar(c);
			c++;
		}
	}
	putchar('\n');
	return (0);
}