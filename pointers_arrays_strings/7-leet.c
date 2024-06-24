#include "main.h"

/**
 * leet - encripts your string with 1331
 * @a: the string yo wanna encrypt
 *Return: pointer to a
 */

char *leet(char *a)
{
	int counter;
	int y = 0;
	char l[] = {'a', 'e', 'o', 't', 'l'};
	char n[] = {'4', '3', '0', '7', '1'};

	counter = 0;
	while (a[counter] != 0)
	{
		y = 0;
		while (y <= 4)
		{
			if (a[counter] == l[y] || a[counter] == l[y] - 32)
			{
				a[counter] = n[y];
			}
			else
			{
				y++;
			}
		}
		counter++;
	}
	return (a);
}
