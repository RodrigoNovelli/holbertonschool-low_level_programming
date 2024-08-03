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
	dlistint_t *current = *h;
	dlistint_t *new;
	dlistint_t *next;
	unsigned int counter = 0;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	if (idx  == 0 || *h == NULL)
	{
		*h = new;
		new->next = current;
		current->prev = new;
		new->n = n;
		new->prev = NULL;
		return (new);
	}
	else
	{
		while (counter < idx - 1)
		{
			if (current == NULL)
				return (NULL);
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
	current->next = new;
	new->prev = current;
	new->next = next;
	new->n = n;
	return (new);
}
