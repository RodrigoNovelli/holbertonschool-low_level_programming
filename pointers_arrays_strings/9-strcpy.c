#include <unistd.h>
#include "main.h"

/**
 * _strlen - Counts the characters of a string
 * @s: The string that you wanna count the characters
 * Return: counter, the return will give you the amount
 * of characters.
 */

int _strlen(char *s)
{
	int counter;

	counter = 0;
	while (s[counter] != '\0')
	{
		counter++;
	}
	return (counter);
}

/**
 * *_strcpy - Counts the characters of a string
 * @dest: The string that will have the copy
 * @src: The string you wanna copy
 * Return: void
 */

char *_strcpy(char *dest, char *src)
{
	int n;
	int m;

	n = _strlen(src);
	for (m = 0; m <= n; m++)
	{
		dest[m] = src[m];
	}
	return (dest);
}
