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
	int sum;
	int nuevo;
	int res;
	int n;

	for (n = 1; n <= argc - 1; n++)
	{
		if (argc == 1)
		{
			printf("0\n");
			return (0);
		}
		else if (atoi(argv[n]) == 0)
		{
			printf("Error\n");
			return (0);
		}
		else if(n == 1)
		{
			sum = 0;
			nuevo = atoi(argv[n]);
			res = sum + nuevo;
		}
		else
		{
			sum = res;
			nuevo = atoi(argv[n]);
			res = sum + nuevo;
			if (n == argc - 1)
			{
				sum = res;
				nuevo = atoi(argv[n]);
				res = sum + nuevo;
				printf("%d\n", sum);
			}
		}
	}
	return (res);
}
