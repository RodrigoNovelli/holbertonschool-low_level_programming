#include <stdlib.h>
#include "main.h"

void free_grid(int **grid, int height)
{
	int n;

	for (n = 0; n <= height; n++)
	{
		free(grid[n]);
	}
	free(grid);
}
