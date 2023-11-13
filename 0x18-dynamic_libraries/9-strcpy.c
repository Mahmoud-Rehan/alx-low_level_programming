#include "main.h"

/**
 * _strcpy - Copies the string pointed to by src.
 * @src: The string
 * @dest: The buffer
 * Return: The beffer dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int j;

	while (src[i] != '\0')
	{
		i++;
	}

	for (j = 0; j <= i; j++)
	{
		dest[j] = src[j];
	}
	return (dest);
}
