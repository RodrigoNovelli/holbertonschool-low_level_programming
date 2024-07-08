#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings in a malloc space of memory
 *@s1: the first string
 *@s2: the second string
 * Return: a pointer, or NULL if something goes wrong
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;
	char *zero;
	unsigned int counter;
	
	if (nmemb == 0)
		return (NULL);
	if (size == 0)
	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);
	zero = p;
	for(counter = 0; counter < (nmemb * size); counter++)
	{
		zero[counter] = 0;
	}
	return (p);
}
