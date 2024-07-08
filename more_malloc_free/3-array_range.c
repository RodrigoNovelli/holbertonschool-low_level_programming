#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - Makes an int array of numbers with malloc
 *@min: the min int you wanna use
 *@max: the max int you wanna reach
 * Return: pointer to the array
 */
int *array_range(int min, int max)
{
	int *p;
	int counter;
	int size;

	size = max - min;
	if (min > max)
		return (NULL);
	if (min == max)
		size = 1;
	p = malloc((size + 1) * sizeof(int));
	if (p == NULL)
		return (NULL);
	for (counter = 0; counter < size; counter++)
	{
		p[counter] = min;
		min++;
	}
	return (p);
}
