#include "main.h"

/**
 * _strpbrk - This function locates the first occurrence in the string s
 * of any of the bytes in the string accept
 * @s: the string you wanna compare
 * @accept: the string you wanna find the ocurrence with
 * Return: a pointer to the coincidence.
 */

char *_strpbrk(char *s, char *accept)
{
	int count;
	int count2;
	char *p;

	count = 0;
	while (s[count] != 0)
	{
		count2 = 0;
		while (accept[count2] != 0)
		{
			if (s[count] == accept[count2])
			{
				p = &s[count];
				return (p);
			}
			count2++;
		}
		count++;
	}
	return (0);
}
