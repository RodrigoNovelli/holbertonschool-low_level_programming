#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
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
