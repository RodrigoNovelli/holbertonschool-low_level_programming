#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/*
 * */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	char *copyn;
	char *copyo;
	int x = 0;
	int y = 0;
	int c;

	while (name != 0)
		x++;
	while (owner != 0)
		y++;
	printf("x: %i\n y: %i\n", x, y);
	d = malloc(sizeof(dog_t));
	if (d == NULL)
	{
		return (NULL);
	}
	else
	{
		copyn = malloc((x + 1) * sizeof(char));
		if (copyn == NULL)
		{
			free(d);
			return (NULL);
		}
		copyo = malloc((y + 1) * sizeof(char));
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
		d->name = copyn;
		d->age = age;
		d->owner = copyo;
		return (d);
	}
}
