#include <stdlib.h>
#include "main.h"

void free_grid(int **grid, int height)
{
	for (grid[height]; height > 0; height--)
	{
		free(grid[height]);
	}
	free(grid);
}
