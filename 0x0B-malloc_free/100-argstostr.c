#include <stdlib.h>
#include "main.h"

char *argstostr(int ac, char **av)
{
	int i;
	int j = 0;
	int n = 0;
	char *ptr;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			j++;
		}
		
		n = n + j;
	}
	
	ptr = malloc((n + ac) * sizeof(char));

	if (ptr == NULL)
	{
		return (NULL);
	}

	j = 0;
	for (i = 0; i < ac; i++)
	{
		while (av[i][j] != '\0')
		{
			ptr[j] = av[i][j];
			j++;
		}
		ptr[j] = '\n';
		j++;
	}
	
	return (ptr);
}
