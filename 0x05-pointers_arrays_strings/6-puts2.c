#include "main.h"

/**
 * puts2 - Prints every other character of a string.
 * @str: The string
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i == 0)
		{
			_putchar(str[i]);
		}
		else
		{
			_putchar(str[i + 1]);
		}
		i++;
	}
	_putchar('\n');
}
