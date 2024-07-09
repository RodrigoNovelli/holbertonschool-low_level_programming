#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
 * free_dog - frees the dog space
 * @d: the pointer to the array of data
 * Return : void function
 */
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
