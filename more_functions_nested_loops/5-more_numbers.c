#include "main.h"

/**
 * more_numbers - check the code
 * Return: void
 */

void more_numbers(void)
{
	int m;
	int x;

	for (x = 0; x <= 9; x++)
	{
		for (m = 0; m <= 14; m++)
		{
			if (m >= 10)
			{
				_putchar((m / 10) + '0');
				_putchar((m % 10) + '0');
			}
			else
			{
				_putchar(m + '0');
			}
		}
		_putchar('\n');
	}
}
