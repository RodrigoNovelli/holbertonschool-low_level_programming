#include "main.h"

/**
 * _strstr - This function locates the first occurrence in the string s
 * of any of the bytes in the string accept, without null
 * @haystack: the string you wanna compare
 * @needle: the string you wanna find the ocurrence with
 * Return: a pointer to the coincidence.
 */

char *_strstr(char *haystack, char *needle)
{
	int count;
	int count2;
	char *p;

	count = 0;
	while (needle[count] != 0)
	{
		count2 = 0;
		while (haystack[count2] != 0)
		{
			if (needle[count] == haystack[count2])
			{
				p = &needle[count];
				return (p);
			}
			else if (needle[count] == haystack[count2] && needle[count] == '\0')
			{
				return ('\0');
			}
			else
			count2++;
		}
		count++;
	}
	return (0);
}
