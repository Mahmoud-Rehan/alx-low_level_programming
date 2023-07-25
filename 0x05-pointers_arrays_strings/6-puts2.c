#include "main.h"

/**
 * puts2 - Prints every other character of a string.
 * @str: The string
 */

void puts2(char *str)
{
	int i = 0;
	int j = 0;

	while (str[j] != '\0')
	{
		j++;
	}

	while (i < j && str[i] != '\0')
	{
		_putchar(str[i]);
		i = i + 2;
	}
	_putchar('\n');
}
