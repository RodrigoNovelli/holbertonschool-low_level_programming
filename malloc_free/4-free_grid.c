#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees the memory that a grid made with malloc have
 *@grid: the grid
 *@height: the height of the grid
 * Return: Always 0.
 */

void free_grid(int **grid, int height)
{
	int n;

	if (grid == NULL)
		return;
	else
	{
		for (n = 0; n <= height; n++)
		{
			free(grid[n]);
		}
		free(grid);
	}
}
