#include "main.h"

char *_strcat(char *dest, char *src)
{
	int len1 = 0;
	int len2 = 0;
	int i;
	int j = 0;

	while (dest[len1] != '\0')
	{
		len1++;
	}

	while (src[len2] != '\0')
	{
		len2++;
	}

	for (i = len1; i < len1 + len2 + 1; i++)
	{
		dest[i] = src[j];
		j++;
	}
	return dest;
}
