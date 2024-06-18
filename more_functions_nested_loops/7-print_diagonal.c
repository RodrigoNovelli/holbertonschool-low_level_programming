#include "main.h"

/**
 * print_diagonal - makes a diagonal line
 *@n: is the number of lines that the diagonal will be
 * Return: Always 0.
 */

void print_diagonal(int n)
{
	int i;
	int b;

	if (n == 0 || n < 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= n; i++)
		{
			for (b = 1; b <= i; b++)
			{
				if (b == i)
				{
					_putchar('\\');
				}
				else
				{
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
