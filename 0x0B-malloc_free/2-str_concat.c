#include <stdlib.h>
#include "main.h"

/**
 * str_concat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 * Return: ptr or NULL.
 */

char *str_concat(char *s1, char *s2)
{
	int n;
	int i = 0;
	int j = 0;
	char *ptr;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[j] != '\0')
	{
		j++;
	}
	ptr = malloc((i + j + 1) * sizeof(char));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (n = 0; n < i; n++)
	{
		ptr[n] = s1[n];
	}
	for (n = 0; n < j; n++)
	{
		ptr[i] = s2[n];
		i++;
	}
	return (ptr);
}
