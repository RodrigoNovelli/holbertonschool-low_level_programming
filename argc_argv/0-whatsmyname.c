#include <stdio.h>
#include <stdlib.h>
/**
 * main - this function will print the name of the program
 * @argc: this is the size of the argument string
 * @argv: this is a string of pointers that lead you to the argument
 * Return: 0.
 */
int main(int argc, char* argv[])
{
	printf("the name of the program is: %s\n", argv[0]);
	return (0);
	(void) argc;
}
