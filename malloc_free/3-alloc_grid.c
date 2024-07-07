#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int **alloc_grid(int width, int height)
{
	int n, y;
	int *p, *p2;

	if (width <= 0 || height <= 0)
		return (NULL);
	p = malloc(height * sizeof(int));
	if (p == NULL)
		return (NULL);
	for (n = 0; n < height; n++)
	{
		p[n] = 0;
		p2=malloc(width * sizeof(int));
		if (p2 == NULL)
			return (NULL)
		for (y = 0; y < width; y++)
		{
			p2[y] = 0;
		}
	}
	return (p);
}
