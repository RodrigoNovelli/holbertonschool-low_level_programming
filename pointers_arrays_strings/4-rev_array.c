#include "main.h"

/**
 * reverse_array - reverses a arrray
 * @a: an array of integers
 * @n: the length of the string
 * Return: nothing.
 */
void reverse_array(int *a, int n)
{
	int counter;
	int x;
	int y = n - 1;

	for (counter = 0; counter <= (n - 1) / 2; counter++)
	{
		if (n == 0)
		{
			break;
		}
		else
		{
			x = a[counter];
			a[counter] = a[y];
			a[y] = x;
			y--;
		}
	}
}
