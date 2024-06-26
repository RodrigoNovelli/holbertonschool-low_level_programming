#include "main.h"

/**
 * factorial - makes a facotrial of n.
 *@n: the number you wanna find the facorial.
 * Return: Always the factorial.
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
	{
		return (1);
	}
	else
		return (n * factorial(n - 1));
}
