#include "main.h"

/**
 * swapSwaps the value of two varr
 * @a: the first value you wanna swap
 * @b: the second value you wanna swap
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int A;
	int B;

	A = *a;
	B = *b;
	*a = B;
	*b = A;

}
