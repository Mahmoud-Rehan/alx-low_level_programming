#include <stdlib.h>
#include "main.h"

void free_grid(int **grid, int height)
{
	int i, j;

	for (i = height; i <= 0; i--)
	{
		free(grid[i]);
	}
	free(grid);
}
