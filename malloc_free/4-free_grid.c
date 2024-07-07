#include <stdlib.h>
#include "main.h"

void free_grid(int **grid, int height)
{
	int n = 0;

	for (grid[n]; n <= height; n++)
	{
		free(grid[n]);
	}
	free(grid);
}
