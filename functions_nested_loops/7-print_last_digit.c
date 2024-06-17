#include "main.h"

/**
 * print_last_digit - Gives the last digit of a number.
 * Descritption: this is a function gives you the last
 * digit of every number
 * @r: This will be the number that you enter
 * Return: l, always.
 */

int print_last_digit(int r)
{
	int l;

	l = r % 10;
	if (r == 0)
	{
		_putchar(r);
		return (r);
	}
	else
	{
		_putchar(l);
		return (l);
	}
}
