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
 * puts_half - prints the last half of a string
 *@str: The string you wanna reverse
 * Return: void
 */

void puts_half(char *str)
{
	int largo = _strlen(str);
	int half = (largo - 1) / 2;
	int l;


	for (l = (half + 1); l < (largo); l++)
	{
		_putchar(str[l]);
	}
	_putchar('\n');
}
