#include "lists.h"
/**
 * get_dnodeint_at_index - Returns the node that is in the index position
 * of the linked list.
 * @head: The adress of the head of the linked list.
 * @index: The position of the node you want to get
 * Return: A pointer to the index node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current;
	unsigned int counter = 0;
	unsigned int check = 0;

	current = head;
	for (counter = 0; counter < index; counter++)
	{
		current = current->next;
	}
	return (current);
}
