#include "main.h"
/**
 * _strcmp - compares the lenght of two strings
 *@s1: the string you wanna know if is greater than s2
 *@s2: the string you wanna compare s1 to
 *Return: -15 (its shorter), 15 (its greater) 0 (equal)
 **/

int _strcmp(char *s1, char *s2)
{
	int counter1 = 0;
	int counter2 = 0;

	while (s1[counter1] != 0)
		counter1++;
	while (s2[counter2] != 0)
		counter2++;
        return (counter1 - counter2);
}
