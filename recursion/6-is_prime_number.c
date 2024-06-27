#include "main.h"

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
int is_prime_number(int n)
{
	       return (division(n, 2, n));
}
