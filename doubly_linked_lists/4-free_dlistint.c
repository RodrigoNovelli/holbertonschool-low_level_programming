#include "lists.h"
/**
 * free_dlistint - This fuction frees the space of structures.
 * @head: A poiter to the head of a linked list.
 * Return: Void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;
	dlistint_t *next;

	current = head;
	while (current != 0)
	{
		next = current->next;
		free(current);
		current = next;
	}
}
