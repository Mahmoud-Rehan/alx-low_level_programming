#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - Prints strings.
 * @separator: The space between strings.
 * @n: The number of args.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	char *s;
	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(args, char *);

		if (separator == NULL)
		{
			if (s != NULL)
				printf("%s", s);
			else
				printf("(nil)");
		}
		else
		{
			if (s != NULL)
				printf("%s", s);
			else
				printf("(nil)");

			if (i != n - 1)
				printf("%s", separator);
		}
	}

	va_end(args);

	printf("\n");
}
