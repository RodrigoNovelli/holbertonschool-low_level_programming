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
 * print_rev - prints the string in reverse
 *@s: the string you wanna print
 * Return: void
 */

void print_rev(char *s)
{
	int l;
	int counter;

	counter = _strlen(s);
	for (l = (counter - 1); l >= 0; l--)
	{
		_putchar(s[l]);
	}
	_putchar('\n');
}
