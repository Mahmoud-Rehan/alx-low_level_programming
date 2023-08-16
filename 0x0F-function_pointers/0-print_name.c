#include "function_pointers.h"

/**
 * print_name - Prints a name.
 * @name: The printed name.
 * @f: Pointer to the print function.
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}
	f(name);
}
