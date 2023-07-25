#include "main.h"

char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int j;
	/* char tmp;*/

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
