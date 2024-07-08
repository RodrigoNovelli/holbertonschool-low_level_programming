#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - concatenates two strings in a malloc space of memory
 *@nmemb: the amount of spaces
 *@size: the bytes of the spaces
 * Return: a pointer to the space of memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;
	char *zero;
	unsigned int counter;

	if (nmemb == 0)
		return (NULL);
	if (size == 0)
		return (NULL);
	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);
	zero = p;
	for (counter = 0; counter < (nmemb * size); counter++)
	{
		zero[counter] = 0;
	}
	return (p);
}
