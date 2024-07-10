#include <stdlib.h>
#include "function_pointers.h"
/**
 * int_index - searches for the first integer in an array that
 * matches the cmp function pointed condition.
 * @array: the array of numbers that you wanna search in.
 * @size: the size of the array you wanna search into.
 * @cmp: a pointer to the function that will make a condition for the int.
 * Return: The position in the array that have th first coincidence.
 * -1 if wrong.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int counter;

	if (size < 1 || array == NULL || cmp == NULL)
	{
		return (-1);
	}
	for (counter = 0; counter < size; counter++)
	{
		if (cmp(array[counter]) != 0)
			return (counter);
	}
	return (-1);
}
