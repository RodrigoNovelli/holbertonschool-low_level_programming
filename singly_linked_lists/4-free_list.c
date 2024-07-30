#include "lists.h"
/**
 * free_list - This fuction frees the space of structures.
 * @head: A poiter to the head of a linked list.
 * Return: Void
 */
void free_list(list_t *head)
{
	list_t *current;
	list_t *next;

	current = head;
	while (current != 0)
	{
		next = current->next;
		free(current->str);
		free(current);
		current = next;
	}
}
