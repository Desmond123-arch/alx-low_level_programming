#include "main.h"
/**
 * free_grid - frees a 2d array
 * @grid: pointer to 2d array
 * @height: height of 2d array
 */
void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		for (i = 0; i <= height; i++)
		{
			free(grid[i]);
		}
		free(gird);
	}
}
