#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - check the code
 *@a: the string
 *@size: size
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int counter;
	int counter1;
	int sum;
	int sum1;

	sum = 0;
	sum1 = 0;
	counter = 0;
	counter1 = 1;
	while (counter < size)
	{
		sum = sum + a[(size + 1) * counter];
		sum1 = sum + a[(size - 1) * counter1];
		counter++;
		counter1++;
	}
	printf("%d, %d\n", sum, sum1);
}
