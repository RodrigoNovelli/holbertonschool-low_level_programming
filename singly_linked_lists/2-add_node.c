#include "lists.h"
/**
 * add_node - This function adds a new node as the first one.
 * @str: This is the string, must be duplicated;
 * @head: a pointer that points the pointer of the head
 * Return: -
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newhead;
	int counter = 0;
	int i;
	char *p;

	while (str[counter] != 0)
		counter++;
	newhead = (list_t *) malloc(sizeof(list_t));
	if (newhead == NULL)
	{
		free(newhead);
		return (NULL);
	}
	p = malloc((counter + 1) * sizeof(char));
	if (p == NULL)
		return (NULL);
	else if (p != NULL)
	{
		for (i = 0; i <= counter; i++)
			p[i] = str[i];
	}
	newhead->str = p;
	newhead->len = counter;
	newhead->next = *head;
	*head = newhead;
	return (newhead);
}
