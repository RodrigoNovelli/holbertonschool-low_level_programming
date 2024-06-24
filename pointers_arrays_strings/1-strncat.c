#include "main.h"
/**
 * _strncat - This function concatenates n bytes of a
 * string with another one.
 *@dest: This must be the string that you wanna put first
 *@src: You will add n bytes from here to dest.
 *@n: the bytes you wana copy form src
 * Return: dest pointer
 *  **/
char *_strncat(char *dest, char *src, int n)
{
	int counter;
	int rec;
	char *p;

	counter = 0;
	while (dest[counter] != 0)
	{
		counter++;
	}
	p = &dest[counter];
	for (rec = 0; rec <= n -1 && src[rec] != 0 ; rec++)
	{
		*p = src[rec];
			p++;
	}

	return (dest);
}
