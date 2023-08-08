#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - Allocate memory to a 2 dimensional grid.
 * @width: The width of the grid.
 * @height: The height of the grid.
 * Return: 2D array.
 */

int **alloc_grid(int width, int height)
{
	int **ptr;
	int i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	ptr = malloc(height * sizeof(int *));

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		ptr[i] = malloc(width * sizeof(int));

		if (ptr[i] == NULL)
		{
			while (i >= 0)
			{
				free(ptr[i]);
				i--;
			}
		free(ptr);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			ptr[i][j] = 0;
		}
	}
	return (ptr);
}
