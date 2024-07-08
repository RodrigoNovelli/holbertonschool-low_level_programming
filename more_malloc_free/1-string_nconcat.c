#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees the memory that a grid made with malloc have
 *@grid: the grid
 *@height: the height of the grid
 * Return: Always 0.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int x, y, z;
	char *p;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	x = 0;
	while (s1[x] != 0)
		x++;
	y = 0;
	while (s2[y] != 0)
		y++;
	if (n >= y)
		n = y;
	p = malloc((x + n + 1) * sizeof(char));
	if (p == NULL)
		return (NULL);
	z = 0;
	while (z <= x + n + 1 && s1[z] != 0)
	{
		p[z] = s1[z];
		z++;
	}
	y = 0;
	while (z <= x + n + 1 && s2[y] < n)
	{
		p[z] = s2[y];
		z++;
		y++;
	}
	return (p);
}
