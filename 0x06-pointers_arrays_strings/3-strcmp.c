#include "main.h"

/**
 * _strcmp - Compares two strings.
 * @s1: The first string
 * @s2: The second string
 * Return: An integer value
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int j = 0;

	while (s1[i] != '\0')
	{
		i++;
	}

	while (s2[j] != '\0')
	{
		j++;
	}

	if (i > j)
	{
		return (1);
	}
	else if (i < j)
	{
		return (-1);
	}
	else
	{
		return (0);
	}
}
