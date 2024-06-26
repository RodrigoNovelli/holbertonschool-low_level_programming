#include "main.h"
/**
 * _print_rev_recursion - Prints all the string in reverse.
 * @s: the string you wanna print.
 *Return: void
 */

void _print_rev_recursion(char *s)
{
	if (*s != 0)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
