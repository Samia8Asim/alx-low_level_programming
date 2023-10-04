#include "main.h"

/**
 * free_grid - function that frees a 2 dimensional grid
 *
 * @grid: 2 dimensional grid
 * @height: height of grid
 *
 */

void free_grid(int **grid, int height)
{
	int i = 0;

	for (; i < height; ++i)
	{
		free(grid[i]);
	}
	free(grid);
}
