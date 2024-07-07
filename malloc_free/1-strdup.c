#include <stdlib.h>
#include "main.h"

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
	if (size > 1)
	{
		p = malloc((size + 1) * sizeof(char));
		if (p == NULL)
			return (NULL);
		else if (p != NULL)
		{
			for (n = 0; n <= size; n++)
				p[n] = str[n];
		}
	}
	return (p);
}
