#include "main.h"

/**
 * string_toupper - this function changes lower for upper cases:
 * @a: the string you wanna change the lower cases.
 * Return: pointer to char
 */

char *string_toupper(char *a)
{
	int counter = 0;
	int x = 0;

	while (a[counter] != 0)
		counter++;
	for (x = 0; x <= counter; x++)
	{
		if (a[x] >= 97 && a[x] <= 122)
			a[x] = a[x] - 32;
		else
			continue;
	}
	return (a);
}
