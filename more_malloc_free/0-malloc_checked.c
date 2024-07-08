#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - allocates memory with malloc
 *@b: the amount of space you want
 *
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
	int *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
	exit(0);
}
