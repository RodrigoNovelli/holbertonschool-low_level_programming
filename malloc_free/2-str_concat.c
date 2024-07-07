#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings in a malloc space of memory
 *@s1: the first string
 *@s2: the second string
 * Return: a pointer, or NULL if something goes wrong
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int size1, size2;
	char *p;
	unsigned int n, y;

	size1 = 0;
	size2 = 0;
	if (s1 == 0)
		s1 = "";
	if (s2 == 0)
		s2 = "";
	while (s1[size1] != 0)
		size1++;
	while (s2[size2] != 0)
		size2++;
	p = malloc((size1 + size2 + 1) * sizeof(char));
	if (p == NULL)
		return (NULL);
	for (n = 0, y = 0; n < size1 + size2; n++)
	{
		if (n < size1)
			p[n] = s1[n];
		else
		{
			p[n] = s2[y];
			y++;
		}
	}
	return (p);
}
