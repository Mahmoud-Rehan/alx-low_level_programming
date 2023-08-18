#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - Prints anything.
 * @format: The format string.
 */

void print_all(const char * const format, ...)
{
	int i = 0;
	char *separator = "";
	char *s;

	va_list args;

	va_start(args, format);

	if (format != NULL)
	{
		while (format[i] != '\0')
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", separator, va_arg(args, int));
					break;
				case 'i':
					printf("%s%d", separator, va_arg(args, int));
					break;
				case 'f':
					printf("%s%f", separator, va_arg(args, double));
					break;
				case 's':
					s = va_arg(args, char *);
					if (s == NULL)
						s = "(nil)";
					printf("%s%s", separator, s);
					break;
				default:
					i++;
					continue;
			}
			separator = ", ";
			i++;
		}
	}

	printf("\n");
	va_end(args);
}
