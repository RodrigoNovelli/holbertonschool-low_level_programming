#include "main.h"

/**
 * print_to_98 -Prints a secunece of numbers.
 * @n: this is the number where you want to start.
 * Return: Always 0.
 */

void print_to_98(int n)
{
	int a;
	int b;
	
	for (n = n; n < 9; n++)
	{
		_putchar(n + '0');
		_putchar(',');
		if (n >= 10)
		{
			a = n / 10;
			b = n % 10;
			_putchar(a + '0');
			_putchar(b + '0');
			_putchar(',');
			n ++;
		}
	}
}
