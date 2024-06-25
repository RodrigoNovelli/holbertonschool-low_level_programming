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
	int counter;
	char *p;

	count = 0;
	counter = 0;
	while (needle[counter] != 0)
		counter++;
	while (haystack[count] != 0)
	{
		count2 = 0;
		while (count2 < counter)
		{
			if (haystack[count] == needle[count2])
			{
				p = &haystack[count];
				while (haystack[count] == needle[count2] && count2 < counter)
				{
					count++;
					count2++;
					if (count2 == counter - 1 && haystack[count] == needle[count2])
						return (p);
				}

			}
			else
				break;
		}
		count++;
	}
	return ('\0');
}
