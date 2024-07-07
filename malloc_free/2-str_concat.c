#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int size1, size2;
	char *p;
	unsigned int n, y;

	size1 = 0;
	size2 = 0;
	while (s1[size1] != 0)
		size1++;
	while (s2[size2] != 0)
		size2++;
	if (s1 == NULL)
		size1 = 1;
	if (s2 == NULL)
		size2 = 1;
	p = malloc((size1 + size2 + 1) * sizeof(char));
	if (p == NULL)
		return (NULL);
	for (n = 0; n <= size1; n++)
	{
		p[n] = s1[n];
	}
	for (y = 0; y <= size2; y++)
	{
		n++;
		p[n] = s2[y];
	}
	return (p);
}
