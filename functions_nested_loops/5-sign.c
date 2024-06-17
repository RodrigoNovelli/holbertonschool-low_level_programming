#include "main.h"

/**
 * print_sign - checks if the number positive, negative or zero.
 * Descritption: this is a function knows if your number is
 * positive, negative or 0.
 * @n: This will be the number that you enter
 * Return: 0 ; 1 ; -1.
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
