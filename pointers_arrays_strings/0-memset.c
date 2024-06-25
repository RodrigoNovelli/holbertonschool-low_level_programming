#include "main.h"

/**
 * _memset - This function fills n spaces of bytes from s pointer
 * with b.
 * @s: the pointer you wanna part from
 * @b: the char you wanna put.
 * @n: the number of byts in s ypu wanna change.
 *Return: a pointer to s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;
	char *p;

	p = s;
	for (x = 0; x < n; x++)
	{
		*s = b;
		s++;
	}
	return (p);
}
