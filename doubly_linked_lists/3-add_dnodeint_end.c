#include "lists.h"
/**
 * add_dnodeint_end - Changes the tail of a doubly linked list
 * @head: head of the linked list (if its null it creates a new one)
 * @n: value to add to the list
 * Return: pointer to the tail.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newtail;
	dlistint_t *current;

	newtail = malloc(sizeof(dlistint_t));
	if (newtail == NULL)
		return (NULL);
	newtail->n = n;
	if (*head == NULL)
	{
		*head = newtail;
		newtail->next = NULL;
		newtail->prev = NULL;
		return (newtail);
	}
	current = *head;
	while (current->next != NULL)
	{
		current = current->next;
	}
	newtail->prev = current;
	newtail->next = NULL;
	current->next = newtail;
	return (newtail);
}
