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
 * _puts - prints the string
 *@str: the string you wanna print
 * Return: void
 */

void _puts(char *str)
{
	int c;
	int j;

	j = _strlen(str);
	for (c = 0; c < j; c++)
	{
		_putchar(str[c]);
	}
	_putchar('\n');
}
