#include "main.h"

/**
 * _isalpha - checks if the letter is alpha.
 * Descritption: this is a function knows if your letter is
 * lower or upper case.
 * @c: This will be the letter that you enter
 * Return: 0 or 1.
 */

int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
