#include "main.h"

/**
 * print_square - makes a square
 *@size: is the size of the squRE
 * Return: Always 0.
 */

void print_square(int size)
{
	int l;
	int a;

	if (size == 0 || size < 0)
	{
		_putchar('\n');
	}
	else
	{
		for (l = 1; l <= size; l++)
		{
			for (a = 1; a <= size; a++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
