#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Return: 0
 */

int main(void)
{
	int n;
	int lastD;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastD = n % 10;

	printf("Last digit of %d is ", n);
	if (lastD > 5)
	{
		printf("%d and is greater than 5\n", lastD);
	}
	else if (lastD == 0)
	{
		printf("%d and is 0\n", lastD);
	}
	else
	{
		printf("%d and is less than 6 and not 0\n", lastD);
	}
	return (0);
}
