#include "main.h"

/**
 * print_line - print a line .
 *@n: th enumber of _
 * Return: Always 0.
 */

void print_line(int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
		if (n == 0)
		{
			_putchar('\n');
			break;
		}
		else
		_putchar('_');
	}
	_putchar('\n');
}
