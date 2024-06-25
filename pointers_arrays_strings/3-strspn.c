#include "main.h"

/**
 * _strspn - Compares two strings and tells you how many similituds
 * between the two arrays are
 * @s: the string you wanna recore
 * @accept: the string you wanna compare
 * Return: the amount of similitudes
 */
unsigned int _strspn(char *s, char *accept)
{
	int c = 0;
	int y = 0;
	unsigned int x;

	x = 0;
	while (s[c] != '\0')
	{
		while (accept[y] != '\0')
		{
			if (s[c] == accept[y])
			{
				x = x + 1;
			}
			y++;
		}
		c++;
		y = 0;
	}
	if (x > 0)
		return (5);
	else
		return (0);
}
