#include "main.h"
/**
 * print_numbers - prints a string form 1 to 9
 */

void print_numbers(void)
{
	int m;

	for (m = 0; m <= 9; m++)
	{
		_putchar(m + '0');
	}
	_putchar('\n');
}
