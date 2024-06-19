#include <unistd.h>

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
