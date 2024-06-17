#include "main.h"

/**
 * times_table - prints all the time tables.
 *
 * Return: Always 0.
 */

void times_table(void)
{
	int m;
	int n;

	for (n = 0; n <= 9; n++)
	{
		for (m = 0; m <= 9; m++)
		{
			if ((m * n) > 9)
			{
				_putchar(((m * n) / 10) + '0');
				_putchar(((m * n) % 10) + '0');
			}
			_putchar((m * n) + '0');
		}
		_putchar('\n');
	}
}
