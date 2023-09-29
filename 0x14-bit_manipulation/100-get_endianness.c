#include "main.h"

/**
 * get_endianness - Checks the endianness.
 * Return: 1 or 0.
 */

int get_endianness(void)
{
	char *p;
	unsigned int n;

	p = (char *) &n;

	return (*p);
}
