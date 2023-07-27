#include "main.h"

/**
 * _strcat - Concatenates two strings.
 * @dest: The first string
 * @src: The second string
 * Return: pointer to the string
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;
	int n;
	int m = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		j++;
	}

	for (n = i; n < i + j + 1; n++)
	{
		dest[n] = src[m];
		m++;
	}

	dest[n] = '\0';
	return (dest);
}
