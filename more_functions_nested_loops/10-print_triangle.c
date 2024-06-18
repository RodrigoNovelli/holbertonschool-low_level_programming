#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
void print_triangle(int size)
{
	int x;
	int y;
	int z;

	if (size == 0 || size < 0)
	{
		_putchar('\n');
	}
	else
	{
		for (y = 0; y <= size ; y++)
		{
			for (x = size - z; x > 1; x--)
			{
				_putchar(' ');
			}
			for (z = 0; z <= size; z++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
