#include <stdlib.h>
#include "main.h"

/**
 * _strdup - Copy the string given as parameter.
 * @str: A string.
 * Return: Copy of the string.
 */

char *_strdup(char *str)
{
	int i = 0;
	char *ptr;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[i] != '\0')
	{
		i++;
	}

	ptr = (char *) malloc(char);

	for (i = 0; str[i] != NULL; i++)
	{
		ptr[i] = str[i];
	}
	return (ptr);
}
