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
	while (needle[counter] != 0)
		counter++;
	while (haystack[count] != 0)
	{
		count2 = 0;
		while (needle[count2] != 0)
		{
			if (haystack[count] == needle[count2])
			{
				p = &haystack[counter];
				while (haystack[count] == needle[count2])
				{
					if (count2 == counter - 1)
						return (p + 2);
					else
					{
						count++;
						count2++;
					}
				}
			}
			count2++;
		}
		count++;
	}
	return ('\0');
}
