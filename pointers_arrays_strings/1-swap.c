#include "main.h"

/**
 * _putchar - writes the character c to stdout
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
