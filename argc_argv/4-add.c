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
	int sum, num, x, n, j;
	char *p;

	sum = 0;
	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (x = 1; x < argc; x++)
	{
		p = argv[x];
		for (j = 0; p[j] != 0; j++)
		{
			if (p[j] < 48 || p[j] > 57)
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	for (n = 1; n < argc; n++)
	{
		num = atoi(argv[n]);
		sum = sum + num;
	}
	printf("%d\n", sum);
	return (0);
}
