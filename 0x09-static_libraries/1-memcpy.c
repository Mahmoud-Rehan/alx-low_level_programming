#include "main.h"

/**
 * _memcpy - Copies memory area.
 * @dest: The buffer that will be copied to.
 * @src: The copied buffer.
 * @n: The number of bytes.
 * Return: The dest buffer.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
