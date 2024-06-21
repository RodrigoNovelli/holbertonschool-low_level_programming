#include "main.h"

int _atoi(char *s)
{
	int adr;
	int j;
	int num;
	
	adr = 0;
	while (s[adr] != '\0')
	{
		if (s[adr] >= '0' && s[adr] <= '9')
		{
			j = adr;
			num = s[adr] - 48;
			adr++;
			while (s[(adr)] >= '0' && s[adr] <= '9')
			{
				num = (num * 10) + (s[adr] - 48);
				adr++;
			}
		}
		else 
		{
			adr++;
		}
	}
	return (num);
	return (j);
}
