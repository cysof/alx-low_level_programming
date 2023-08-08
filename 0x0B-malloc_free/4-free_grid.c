#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Frees memory of a 2D grid.
 * @grid: The 2D grid to be freed.
 * @height: The height of the 2D grid.
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height <= 0)
		return;
	for (i = 0; i < height; i++)
	{
		if (grid[i] != NULL)
			free(grid[i]);
	}
	free(grid);
}

