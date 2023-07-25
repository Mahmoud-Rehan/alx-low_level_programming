#include "main.h"

/**
 * puts_half - Prints half of a string.
 * @str: The string
 */

void puts_half(char *str)
{
	int n;
       	int length = 0;

	while (str[length] != '\0')
	{
		length++;
	}

	if (length % 2 == 1)
	{
		n = (length + 1) / 2;
	}
	else
	{
		n = length / 2;
	}

	while (str[n] != '\0')
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}
