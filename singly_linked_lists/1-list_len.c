#include "lists.h"
size_t list_len(const list_t *h)
{
	size_t n;
	const list_t *current = h;

	while (current != 0)
	{
		current = current->next;
		n++;
	}
	return (n);

}
