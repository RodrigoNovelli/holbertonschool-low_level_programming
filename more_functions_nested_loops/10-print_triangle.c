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
	int counter;

	counter = 1;

	if (size == 0 || size < 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 1; x <= size ; x++)
		{
			for (y = size - x; y >= 1; y--)
			{
				_putchar('.');
			}
			for (z = 0; z < counter; z++)
			{
				_putchar('#');
			}
			counter++;
			_putchar('\n');
		}
	}
}
