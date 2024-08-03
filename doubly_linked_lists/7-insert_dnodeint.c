#include "lists.h"
/**
 *  insert_dnodeint_at_index - Creates a new node in the index position of
 *  the linked list.
 *  @h: Pointer to a pointer that points the list head.
 *  @idx: Position where ypu want to insert a new node.
 *  @n: The new int value of new node.
 *  Return: A pointer to the new node.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current;
	dlistint_t *new;
	dlistint_t *next;
	unsigned int counter = 0;

	current = *h;
	if (idx  - 1 == 0)
	{
		current = *h;
		next = current->next;
	}
	else
	{
		while (counter < idx - 1)
		{
			current = current->next;
			counter++;
		}
		next = *h;
		counter = 0;
		while (counter <= idx - 1)
		{
			counter++;
			next =  next->next;
		}
	}
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	current->next = new;
	new->prev = current;
	new->next = next;
	new->n = n;
	return (new);
}
