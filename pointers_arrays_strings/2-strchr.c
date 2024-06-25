#include "main.h"

/**
 * _strchr - this functions will find the first char of a array
 * @s: the array you wanna find c
 * @c: the character you wanna find.
 * Return: x a oiunter to the char.
 */

char *_strchr(char *s, char c)
{
	char *x;
	int counter = 0;

	while (s[counter] != 0)
	{
		if (s[counter] == c)
		{
			x = &s[counter];
			return (x);
		}
		else if (c == '\0')
		{
			x == &[counter];
			return (x);
		}
		counter++;
	}
	return (0);
}
