#include "main.h"

/**
 *  prints a string in reverse.
 *  @s: the printed string.
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s);
	}
	_putchar(*s);
}
