#include "main.h"
#include <stdio.h>
/**
 * print_array - prints n characters of a string
 *@a: the string
 *@n: the amount of char
 * Return: void
 */

void print_array(int *a, int n)
{
	int m;

	for (m = 0; m < n; m++)
	{
		if (m == (n - 1))
		{
			printf("%d", a[m]);
		}
		else
		{
			printf("%d, ", a[m]);
		}
	}
	printf("\n");
}
