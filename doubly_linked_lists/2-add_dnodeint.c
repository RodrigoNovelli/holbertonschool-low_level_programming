#include "lists.h"
/**
 * add_dnodeint - Changes the head of a doubly linked list
 * @head: head of the linked list (if its null it creates a new one)
 * @n: value to add to the list
 * Return: pointer to the head.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newhead;

	newhead = malloc(sizeof(dlistint_t));
	if (newhead == NULL)
		return (NULL);
	newhead->n = n;
	if (*head == NULL)
	{
		*head = newhead;
		newhead->next = NULL;
		newhead->prev = NULL;
		return (newhead);
	}
	newhead->next = *head;
	newhead->prev = NULL;
	(*head)->prev = newhead;
	*head = newhead;
	return (newhead);
}
