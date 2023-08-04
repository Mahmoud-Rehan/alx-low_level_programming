#include "main.h"

/**
 * _strstr - Locates a substring.
 * @haystack: The string.
 * @needle: The string.
 * Return: needle or 0.
 */

char *_strstr(char *haystack, char *needle)
{
	char *s1;
	char *s2;

	for (; *haystack != '\0'; haystack++)
	{
		s1 = haystack;
		s2 = needle;

		while (*s1 == *s2 && *s2 != '\0')
		{
			s1++;
			s2++;
		}

		if (*s2 == '\0')
		{
			return (haystack);
		}
	}

	return (0);
}
