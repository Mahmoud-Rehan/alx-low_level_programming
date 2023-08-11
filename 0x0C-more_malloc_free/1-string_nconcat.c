#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - Concatenates two strings.
 * @s1: The first string.
 * @s2; The second string.
 * Return: The concatenated string.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i = 0;
	int j = n - 1;

	ptr = malloc(sizeof(s1 + n));

	if (ptr == NULL)
	{
		return (NULL);
	}
	while (s1[i] != '\0')
	{
		ptr[i] = s1[i];
		i++;
	}

	for (i = 0; i < n; i++)
	{
		ptr[j] = s2[i];
		j++;
	}
	return (ptr);
}
