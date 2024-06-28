#include <stdio.h>
#include <stdlib.h>
/**
 * main - this function will print the number of arguments
 * @argc: the number of argumetns
 * @argv: array pointers to array of arguments.
 * Return: 0.
 */

int main(int argc, char *argv[])
{
	int n;

	(void) argv;
	for (n = 0; n < argc; n++)
	{
		printf("%s\n", argv[n]);
	}
	return (0);
}
