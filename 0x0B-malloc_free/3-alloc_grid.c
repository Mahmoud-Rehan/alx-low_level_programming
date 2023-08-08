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

	for (i = 0; i < height; i++)
	{
		ptr = malloc(height * sizeof(int));
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			ptr[i] = malloc(sizeof (int));
			ptr[i][j] = 0;
		}
	}
	return (ptr);
}
