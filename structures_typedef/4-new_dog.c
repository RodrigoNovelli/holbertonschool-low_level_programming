#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/*
 * new_dog - Creates a new dog
 * @name: the name of th enew dog
 * @age: the age of the owner
 * @owner: the owner of the dor
 * Return: pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	char *copyn;
	char *copyo;
	int x = 0;
	int y = 0;
	int c;

	while (name[x] != 0)
		x++;
	while (owner[y] != 0)
		y++;
	d = malloc(sizeof(dog_t));
	if (d == NULL)
	{
		return (NULL);
	}
	else
	{
		copyn = malloc(x * sizeof(char));
		if (copyn == NULL)
		{
			free(d);
			return (NULL);
		}
		copyo = malloc(y * sizeof(char));
		if (copyo == NULL)
		{
			free(d);
			free(copyn);
			return (NULL);
		}
		for (c = 0; c < x; c++)
			copyn[c] = name[c];
		for (c = 0; c < y; c++)
			copyo[c] = owner[c];
		d->name = name;
		d->age = age;
		d->owner = owner;
		return (d);
	}
}
