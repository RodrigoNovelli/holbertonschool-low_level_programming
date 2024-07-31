#include "lists.h"
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newhead;

	newhead = malloc(sizeof(dlistint_t));
	if (newhead == NULL)
		return (NULL);
	newhead->n = n;
	newhead->next = *head;
	newhead->prev = NULL;
	(*head)->prev = newhead;
	if (head == NULL)
	{
		*head = newhead;
		return (newhead);
	}
	return (newhead);
}
