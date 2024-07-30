#include "lists.h"
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newtail  = *head;
	char *p;
	int i = 0;

	if (*head == NULL)
	{
		*head = malloc(sizeof(list_t));
	}
	p = strdup(str);
	while (p[i] != 0)
		i++;
	while (newtail->next != 0)
	{
		newtail = newtail->next;
	}
	newtail->next = malloc(sizeof(list_t));
	if (newtail == NULL)
        {
                free(newtail);
                return (NULL);
        }
	newtail = newtail->next;
	newtail->str = p;
        if (p == NULL)
        {
                free(newtail);
                return (NULL);
        }
	newtail->next = NULL;
	return (newtail);
}
