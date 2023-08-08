#include <stdlib.h>
#include "main.h"

/**
 * free_grid - Frees a 2 dimensional grid.
 * @grid: The grid.
 * @height: The height of the grid.
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = height; i > 0; i--)
	{
		free(grid[i]);
	}
	free(grid);
}
