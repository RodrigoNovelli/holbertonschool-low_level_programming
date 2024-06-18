#include "main.h"
#include <stdio.h>

/**
 * print_to_98 -Prints a secunece of numbers.
 * @n: this is the number where you want to start.
 * Return: Always 0.
 */

void print_to_98(int n)
{
	if (n == 98)
	{
		printf("%d\n",n);
	}
	else if (n > 98)
	{
		if (n == 98)
		{
			printf("%d\n",n);
		}
		else
		{
			for (n = n; n >= 98; n--)
			printf("%d, ",n);
		}
	}
	else
	{
		for (n = n; n <= 98; n++)
		{
			if (n == 98)
			{
				printf("%d\n",n);
			}
			else
			printf("%d, ",n);
		}
	}
}
