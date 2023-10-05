#include "main.h"

/**
 * alloc_grid - function that returns a pointer to a 2 dimensional array
 *
 * @width: array width
 * @height: array height
 *
 * Return: returns a pointer to a 2D array  and NULL on failuer
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	grid = malloc(sizeof(*grid) * height);
	if (grid == 0 || height <= 0 || width <= 0)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < height; i++)
			grid[i] = malloc(sizeof(**grid) * width);
		if (grid[i] == 0)
		{
			while (i--)
				free(grid[i]);
			free(grid);
			return (NULL);
		}
		for (; i > 0; i--)
		{
			for (j = 0; j < width; j++)
			{
				grid[i][j] = 0;
			}
		}
	}
	return (grid);
}
