#include "main.h"

/**
 * _strncat - Concatenates two strings.
 * @dest: The first string
 * @n: The number of bytes
 * @src: The second string
 * Return: The pointer dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int len1 = 0;
	int i;

	while (dest[len1] != '\0')
	{
		len1++;
	}

	for (i = 0; i < n; i++)
	{
		dest[len1] = src[i];
		len1++;
	}
	dest[len1 + 1] = '\0';
	return (dest);
}
