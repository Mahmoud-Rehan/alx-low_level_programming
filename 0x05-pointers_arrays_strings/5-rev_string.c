#include "main.h"

/**
 * rev_string - Reverses a string.
 * @s: The string
 */

void rev_string(char *s)
{
	int i = 0;
	int j;
	char tmp;

	while (s[i] != '\0')
	{
		i++;
	}

	for (j = 0; j < i; j++)
	{
		i--;
		tmp = s[j];
		s[j] = s[i];
		s[i] = tmp;
	}
}
