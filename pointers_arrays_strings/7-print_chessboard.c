#include "main.h"

/**
 * print_chessboard - prints the cheesboard
 *@a: the chess
 * Return: void.
 */

void print_chessboard(char (*a)[8])
{
	int counter = 0;
	int counter1;

	while (a[counter][counter1] != 0)
	{
		counter1 = 0;
		while (a[counter][counter1] != 0)
		{
			if (counter1 == 7)
			{
				_putchar(a[counter][counter1]);
				_putchar('\n');
				break;
			}
			else
			{
				_putchar(a[counter][counter1]);
				counter1++;
			}
		}
		counter++;
	}
}
