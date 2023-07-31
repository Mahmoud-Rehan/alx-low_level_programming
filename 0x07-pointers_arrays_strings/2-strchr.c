#include "main.h"

char *_strchr(char *s, char c)
{
	int i;
	char *f;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			f = &s[i];
			break;
		}
	}

	if (f[0] != c)
	{
		return (0);
	}

	return (s);
}
