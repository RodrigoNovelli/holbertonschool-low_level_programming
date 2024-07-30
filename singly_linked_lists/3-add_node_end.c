#include "lists.h"
/**
 * add_node_end - Changes the tail of the linked list.
 * @str: This is the string, must be duplicated;
 * @head: a pointer that points the pointer of the head
 * Return: A pointer to the new tail.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *current;
	list_t *newtail;
	int i = 0;

	newtail = malloc(sizeof(list_t));
	if (newtail == NULL)
	{
		free(newtail);
		return (NULL);
	}
	newtail->str = strdup(str);
	while (str[i] != 0)
		i++;
	if (newtail->str == NULL)
	{
		free(newtail);
		return (NULL);
	}
	newtail->len = i;
	newtail->next = NULL;
	if (*head == NULL)
	{
		*head = newtail;
		return (newtail);
	}
	current = *head;
	while (current->next != NULL)
		current = current->next;
	current->next = newtail;
	return (newtail);
}
