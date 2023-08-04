#include "main.h"

/**
 * _memset - Fills memory with a constant byte.
 * @s: The buffer.
 * @b: The constant byte.
 * @n: The size of memory area pointed by (s).
 * Return: The buffer s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
