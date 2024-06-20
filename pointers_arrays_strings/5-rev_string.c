#include "main.h"

/**
 *_strlen - counts the ch of a string
 *@s: the string you wanna count
 * Return: the amount of characters
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
 * rev_string - Reverse the string
 *@s: The string you wanna reverse
 * Return: void
 */

void rev_string(char *s)
{
	int c;
	int mirror[500];
	int l;
	int d;

	c = _strlen(s);
	for (l = 0; l <= c; l++)
	{
		mirror[l] = s[l];
	}
	l = 0;
	for (d = c - 1; d >= 0; d--)
	{
		s[l] = mirror[d];
		l++;
	}
}
