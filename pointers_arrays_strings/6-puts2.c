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
 * puts2 - Prints every 2 char
 *@str: The string you wanna print
 * Return: void
 */

void puts2(char *str)
{
	int largo;
	int l;

	largo = _strlen(str);
	for (l = 0; l < largo; l += 2)
	{
		_putchar(str[l]);
	}
	_putchar('\n');
}
