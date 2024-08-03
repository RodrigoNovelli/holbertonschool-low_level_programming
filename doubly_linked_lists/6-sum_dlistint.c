#include "lists.h"
/**
 * sum_dlistint - Sums all the int values in a linked list
 * @head: The address of the head of a linked list
 * Return: Total of values.
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current;
	int sum = 0;

	current = head;
	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
