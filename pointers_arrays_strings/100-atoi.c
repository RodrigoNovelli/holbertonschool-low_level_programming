#include "main.h"
/**
 * _atoi - Find int data in strings
 *@s: the string you wanna convert into int
 * Return: num
 */
int _atoi(char *s)
{
	int adr;
	int j;
	int num;
	int sign;

	adr = 0;
	sign = 1;
	while (s[adr] != '\0')
	{
		if (s[adr] >= '0' && s[adr] <= '9')
		{
			j = adr;
			num = s[adr] - 48;
			adr++;
			while (s[adr] >= '0' && s[adr] <= '9')
			{
				num = (num * 10) + (s[adr] - 48);
				adr++;
				if (s[adr] <= '0' || s[adr] >= '9')
					break;
			}
			if (s[adr] <= '0' || s[adr] >= '9')
				break;
		}
		else
			adr++;
	}
	for (adr = 0; adr <= j; adr++)
	{
		if (s[adr] == '-')
			sign = sign * -1;
		else if (s[adr] == '+')
			sign = sign * 1;
		else
			continue;
	}
	num = num * sign;
	return (num);
}
