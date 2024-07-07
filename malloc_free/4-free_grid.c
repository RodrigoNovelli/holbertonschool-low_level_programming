#include <stdlib.h>
#include "main.h"

void free_grid(int **grid, int height)
{
	int n = 0;
	int y = 0;

	for (grid[height] > 0)
	{
		free(grid[height]);
		height--;
	}
	free(grid);
}
