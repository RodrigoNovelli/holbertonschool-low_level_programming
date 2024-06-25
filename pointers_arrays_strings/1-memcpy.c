#include "main.h"

/**
 * _memcpy - copies n elements of src to dest
 * @dest: the strign you gana copy to
 * @src: the string you wanna copy n elements
 * @n: the amount of elements from n you wanna copy
 * Return: dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;
	char *p;
	
	p = dest;
	for (x = 0; x < n; x++)
	{
		*dest = src[x];
		dest++;
	}
	return (p);
}
