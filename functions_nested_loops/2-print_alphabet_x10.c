#include "main.h"
#include "1-alphabet.c"

/**
 * print_alphabet_x10 - print 10 alphabets.
 *
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{
	int c;

	for (c = 0 ; c <= 9 ; c++)
	{
		char l;

		for (l = 'a' ; l <= 'z' ; l++)
		{
			putchar(l);
		}
		putchar('\n');
	}
}
