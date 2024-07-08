#include <stdlib.h>
#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

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
	{
		_putchar('O');
		_putchar('K');
	}
	else
	{
		for (n = 0; n <= height; n++)
		{
			free(grid[n]);
		}
		free(grid);
	}
}
