#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - Prints numbers.
 * @separator: The space between numbers.
 * @n: The number of args.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	if (n == 0)
	{
		return;
	}

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		if (separator == NULL)
		{
			printf("%d", va_arg(args, int));
		}
		else
		{
			printf("%d", va_arg(args, int));
			if (i != n - 1)
			{
				printf("%s", separator);
			}
		}
	}

	va_end(args);

	printf("\n");
}
