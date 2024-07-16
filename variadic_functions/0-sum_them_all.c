#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
/**
 * sum_them_all - this is a function that sums an
 * indeterminated amount of numbers.
 * @n: the total amount of numbers.
 * Return: the total.
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int counter;
	va_list sumandos;
	unsigned int res = 0;

	if (n == 0)
		return (0);
	va_sart(sumandos, n);
	for (counter = 0; counter <= n; counter++)
	{
		res = res + va_list(sumandos, n);
	}
	va_end(sumandos);
	return (res);
}
