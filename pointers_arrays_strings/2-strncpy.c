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

	counter0 = 0;
	while (dest[counter0] != 0)
	{
		counter0++;
	}
	while (src[counter2] != 0)
	{
		counter2++;
	}
	if (counter2 == 2)
	{
		for (counter1 = 0; counter1 < n; counter1++)
		{
			dest[counter1] = src[0];
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
