#include "main.h"
/**
 *_strncpy - this function copies a source string to a destination
 * one
 * @dest: the array where you wanna copy she source,
 * @src: the string you want to copy
 * @n: the amount of ahcaracteres to be copied
 * Return: a pointer to dest.
 * **/

char *_strncpy(char *dest, char *src, int n)
{
	int counter1;
	int counter0;
	int counter2;
	int cpy;

	counter0 = 0;
	while (dest[counter0] != 0)
	{
		counter0++;
	}
	while (src[counter2] != 0)
	{
		counter2++;
	}
	if (n > counter2)
	{
		for (cpy = 0; cpy <= counter2; cpy++)
		{
			dest[cpy] = src[cpy];
		}
		for (cpy = counter2 + 1; cpy <= n; cpy++)
		{
			dest[cpy] = '\0';
		}

	}
	else
	{
		for (counter1 = 0; counter1 < n; counter1++)
		{
				dest[counter1] = src[counter1];
		}
	}
	return (dest);
}
