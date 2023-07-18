#include "main.h"

/**
 * print_alphabet_10x - Prints 10 times the alphabet in lowercase.
 */

void print_alphabet_10x(void)
{
	char c;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
	return (0);
}
