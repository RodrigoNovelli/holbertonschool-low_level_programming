#include "lists.h"
/**
 * dlistint_len - This function gets the len of a doubly linked list.
 * @h: A pointer to the head.
 * Return: the amount of nodes.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	while (h != 0)
	{
		i++;
		h = h->next;
	}
	return (i);
}
