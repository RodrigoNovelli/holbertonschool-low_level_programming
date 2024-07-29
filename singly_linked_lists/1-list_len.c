#include "lists.h"
/**
 * list_len - Counts the amount of nodes in a linked list.
 * @h: A pointer to the head.
 * Return: The amount of nodes.
 */
size_t list_len(const list_t *h)
{
	size_t n;
	const list_t *current = h;

	while (current != NULL)
	{
		current = current->next;
		n++;
		if (current->next == NULL)
			break;
	}
	return (n);

}
