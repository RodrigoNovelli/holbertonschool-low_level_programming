#include "main.h"

/**
 * print_to_98 -Prints a secunece of numbers.
 * @n: this is the number where you want to start.
 * Return: Always 0.
 */

void print_to_98(int n)
{
	int a;
	int b;
	
	for (n = n; n < 9; n++)
	{
		_putchar(n + '0');
		_putchar(',');
		if (n >= 10)
		{
			a = n / 10;
			b = n % 10;
			_putchar(a + '0');
			_putchar(b + '0');
			_putchar(',');
			n ++;
		}
	}
}


void print_to_98(int n)
{
	int a;
	int b; 
	
	if (n <= 9)
	  for (n = n; n <= 9; n++) 
			{
				_putchar(n);
				_putchar(',');
				if (n > 9)
				{
				for (n = n; n <= 98; n++)
				{
					a = n / 10;
					b = n % 10;
					_putchar(a + '0');
					_putchar(b + '0');
					_putchar(',');
				}
				}
			}
			if ( n <0 )
			{
				for (n = n; n < 0; n++)
				{ 
					a = n * -1
					_putchar('-');
					_putchar(a + '0');
					_putchar(',');
					_putchar(' ');
				}
			}
			if (n >= 100)
			{
				c = n / 100;
				a = (n / 10) % 10;
				b = n % 10;
				for ( n = n; n >= 98; n--)
				_putchar(c + '0');
				_putchar(a + '0');
				_putchar(b + '0');
				_putchar(',');
				_putchar(',');
				if (n < 100 && n > 98)
				{
					for (n = n; n > 98 && n < 100; n--) 
					{
					a = n / 10;
					b = n % 10;
					_putchar(a + '0');
					_putchar(b + '0');
					_putchar(',');
					}
				}
			}
}

