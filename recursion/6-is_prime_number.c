#include "main.h"
/**
 * division - dividies a number
 * @x: the number you will divide
 * @y: you divide x between y
 * @lim: increments x until lim
 * Return: how many divisors it have
 */
int division(int x, int y, int lim)
{
	if ((x % y == 0 && x <= lim) || x < 0 || x == 1)
	{
		return (0);
	}
	else if (x % y != 0 && x < lim)
	{
		return (division(x, y + 1, lim));
	}
	else
	{
		return (1);
	}
}

/**
 * is_prime_number - knows if a number is prime
 *@n: the number you wanna know about
 *Return: Always 1 is prime, 0 its not
 */
int is_prime_number(int n)
{
	return (division(n, 2, n));
}
