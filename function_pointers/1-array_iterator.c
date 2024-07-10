#include <stdlib.h>
#include <stdio.h>
/**
 * array_iterator - This function iterates the values of an array
 * to give it as different arguments of a ppointed function.
 * @array: the array you wanna iterate
 * @size: the size of the values of the array you wanna use.
 * @action: the function you will recal, in this case a function that
 * recives an int as an argument.
 * Return : its void so it returns any value, it only pass the variable
 * to the recall function.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t counter;

	for (counter = 0; counter < size; counter++)
	{
		action(array[counter]);
	}
}
