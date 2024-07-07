#include <stdlib.h>
#include "main.h"

void free_grid(int **grid, int height)
{
	int n;

	if (grid == NULL)
		return ("OK")
	for (n = 0; n <= height; n++)
	{
		free(grid[n]);
	}
	free(grid);
}
