#include "main.h"

/**
 * _isupper - knows if your char is upper case.i
 *@c: this is the char you wanna know about.
 * Return: 0 (isn't upper) 1 (it is)
 */
int _isupper(int c)
{
	if (c <= 90 && c >= 65)
	{
		return (1);
	}
	else
		return (0);
}
