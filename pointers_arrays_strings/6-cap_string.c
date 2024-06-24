#include "main.h"

/**
 * cap_string - this function converts the first letter of every
 * word in capital letter
 * @a: the string you wanna 
 * Return: Always 0.
 */

char *cap_string(char *a)
{
	int counter = 0;
	int x;

	while (a[counter] != 0)
		counter++;
	for (x = 0; x < counter; x++)
	{
		if (a[x] == 9 || a[x] == '\n' || a[x] == 22 || a[x] == 32
				|| a[x] == 28 || a[x] == 29 || a[x] == 44
				|| a[x] == 46 || a[x] == 59 || a[x] == 21
				|| a[x] == 63 || a[x] == 123 || a[x] == 125)
		{
			if (a[x + 1] >= 97 && a[x + 1] <= 122)
				a[x + 1] = a[x + 1] - 32;
			else
				continue;
		}
		else
			continue;
	}
	return (a);
}
