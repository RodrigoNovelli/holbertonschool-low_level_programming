#include "main.h"
/**
 * _pow_recursion - This function makes the pow of x
 *@x: the num you wanna pow
 *@y: how much you wanna pow
 * Return: the result.
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	if (y < 0)
		return (-1);
	else
		return (x * _pow_recursion(x, y - 1));
}
