#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - This funtion changes the values in dog stucture.
 * @d: pointer to memory where dog structure is stored.
 * @name: will be the value od name in the structure
 * @age: will be the value of age in the structure
 * @owner: will be the value of the owner in the structure.
 * Return: void
 * */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		exit (1)
	else
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
