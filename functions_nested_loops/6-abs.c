#include "main.h"

/**
 * _abs - prints the absolute value of r.
 * Descritption: this is a function that prints
 * the absolute value of r.
 * @r: this is the value that you enter
 * Return: 0 always.
 */

int _abs(int r)
{
	int p;

	p = r * -1;

	if (r < 0)
	{
		return (p);
	}
	else
	{
		return (r);
	}
}
