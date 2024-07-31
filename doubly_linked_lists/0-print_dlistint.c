#include "lists.h"
/**
 * print_dlistint - Prints all the nodes in a dobly linked list
 * @h: A pointer to the head of the linked list.
 * Return: the amount of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;
	const dlistint_t *current = h;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
		i++;
	}
	return (i);
}
