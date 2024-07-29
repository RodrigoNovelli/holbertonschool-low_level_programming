#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_list - This function prints an entire linked list
 * @h: A pointer to the head.
 * Return: The amount of nodes in the list.
 */
size_t print_list(const list_t *h)
{
	size_t n = 0;
	const list_t *current = h;

	while (current != NULL)
	{
		if (current->str == NULL)
		{
			printf("[0] (nil)\n");
			return (0);
		}
		printf("[%d] %s\n", current->len, current->str);
		current = current->next;
		n++;
	}
	return (n);
}
