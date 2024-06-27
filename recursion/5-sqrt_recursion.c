#include "main.h"
/**
 * multiplicador - multiplie the number for the same number
 *@y: the number you will multiplie for itself
 *@n: you wana mutiplie it until reaches n
 * Return: Always 0.
 */
int multiplicador(int y, int n)
{
	if ((y * y) == n)
	{
		return (y);
	}
	else if ((y * y) > n)
	{
		return (-1);
	}
	else
		return (multiplicador(y + 1, n));
}
/**
 * _sqrt_recursion - finds the square root of n
 * @n: the number you wanna find the root
 * Return: the root
 */
int _sqrt_recursion(int n)
{
	return (multiplicador(1, n));
}
