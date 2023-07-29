#include <stdlib.h>
#include "lists.h"

/*
 * @h:displays  pointer to the list_t list*
 * list_len - number of elements in a linked list
 *
 * Return :total elements in h
 */
size_t list_len(const list_t *h)
{
	size_t o = 0;

	while (h)
	{
		o++;
		h = h->next;
	}
	return (o);
}
