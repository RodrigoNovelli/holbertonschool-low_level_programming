#include "main.h"
/**
 * _puts_recursion - Prints all the string
 * @s: the string you wanna print.
 *Return: void
 */
void _puts_recursion(char *s)
{
	if (*s == 0)
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*s);
		s++;
		_puts_recursion(s);
	}

}
