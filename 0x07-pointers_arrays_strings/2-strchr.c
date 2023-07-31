#include "main.h"

/**
 * _strchr - Locates a character in a string.
 * @s: The string.
 * @c: The character.
 * Return: The address of the char or 0.
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}

	return (0);
}
