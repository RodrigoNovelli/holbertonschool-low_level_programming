#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings in a malloc space of memory
 *@s1: the first string
 *@s2: the second string
 * Return: a pointer, or NULL if something goes wrong
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
