#include <stdlib.h>
#include "main.h"

/**
 * create_array - Creates an array , and initializes it with a specific char.
 * @size: The size of the array.
 * @c: The initialized character.
 * Return: The array.
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	ptr = malloc(size * sizeof(char));

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		*(ptr + i) = c;
	}
	return (ptr);
}
