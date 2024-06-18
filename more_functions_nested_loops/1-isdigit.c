#include "main.h"

/**
 * _isdigit - This function knows if a char is digit or not.
 *@c: c is the char you wanna know about
 *Return: 1 is digit.
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
		return (0);
}
