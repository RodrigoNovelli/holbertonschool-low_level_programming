#include <stdlib.h>

/**
 * create_array - create an array of chars
 * @size: size of array
 * @c: char you wanna print
 * Return: char pointer to malloc created memory address or NULL if error
 */

char *create_array(unsigned int size, char c)
{
	unsigned int n;
	char *c;

	p = malloc(size * (sizeof(char));
	if (size == 0)
		return ("/0");
	else if
	{
		for (n = 0; n < size; n++)
		{
			p[n] = c;
		}
	}
	return (p);
}
