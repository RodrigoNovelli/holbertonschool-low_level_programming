#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - This function recibes a variable name and recalls a function,
 * it puts the name variable as the pointed function variable.
 * @name: The name you wanna print.
 * @f: A pointer to a function that exist.
 * Return : Its void, it will only print, dont return any value.
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
