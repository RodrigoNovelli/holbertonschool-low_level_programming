#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int **alloc_grid(int width, int height)
{
	int n, y;
	int **p;

	if (width <= 0 || height <= 0)
		return (NULL);
	p = malloc(height * sizeof(int));
	if (p == NULL)
		return (NULL);
	for (n = 0; n < height; n++)
	{
		p[n] = 0;
		p[n] = malloc(width * sizeof(int));
		if (p[n] == NULL)
			return (NULL);
		for (y = 0; y < width; y++)
		{
			p[n][y] = 0;
		}
	}
	return (p);
}
