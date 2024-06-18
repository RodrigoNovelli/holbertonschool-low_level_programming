#include "main.h"

/**
 * more_numbers - check the code
 * Return: void
 */

void more_numbers(void)
{
	int m;

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
