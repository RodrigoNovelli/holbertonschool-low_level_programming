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

	if (r < 0)
	{
		l = -1 * (r % 10);
		return (l);
	}
	else
	{
		l = r % 10;
		return (l);
	}
}
