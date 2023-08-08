#include <stdlib.h>
#include "main.h"

/**
 * argstostr - Concatenates all the arguments of the program.
 * @ac: The count of the array.
 * @av: The array of strings.
 * Return: Pointer to the string or NULL.
 */

char *argstostr(int ac, char **av)
{
	int i, n;
	int j = 0;
	char *ptr;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n] != '\0'; n++)
		{
			j++;
		}
	}

	ptr = malloc((j + ac + 1) * sizeof(char));

	if (ptr == NULL)
	{
		return (NULL);
	}

	j = 0;

	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n] != '\0'; n++)
		{
			ptr[j] = av[i][n];
			j++;
		}
		ptr[j] = '\n';
		j++;
		ptr[j] = '\0';
	}

	return (ptr);
}
