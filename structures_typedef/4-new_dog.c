#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
 * _strdup - Duplicates a string with malloc
 *@str: the string you wanna duplicate
 * Return: Pointer to the duplicated string or NULL.
 */
char *_strdup(char *str)
{
	unsigned int size = 0;
	unsigned int n;
	char *p;

	if (str == NULL)
		return (NULL);
	while (str[size] != 0)
	{
		size++;
	}
	if (size == 0)
		size = 1;
	p = malloc((size + 1) * sizeof(char));
	if (p == NULL)
		return (NULL);
	else if (p != NULL)
	{
		for (n = 0; n <= size; n++)
			p[n] = str[n];
	}
	return (p);
}
/**
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
		copyn = _strdup(name);
		if (copyn == NULL)
		{
			free(d);
			return (NULL);
		}
		copyo = _strdup(owner);
		if (copyo == NULL)
		{
			free(d);
			free(copyn);
			return (NULL);
		}
		d->name = copyn;
		d->age = age;
		d->owner = copyo;
		return (d);
	}
}
