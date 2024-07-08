#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees the memory that a grid made with malloc have
 *@grid: the grid
 *@height: the height of the grid
 * Return: Always 0.
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b * sizeof(void));
	return (p);
}
