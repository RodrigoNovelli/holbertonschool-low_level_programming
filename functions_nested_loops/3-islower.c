#include "main.h"

/**
 * _islower - checks if the letter is lower case.
 * Descritption: this is a function knows if your letter is
 * lower or upper case.
 * @c: This will be the letter that you enter
 * Return: 0 or 1.
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
