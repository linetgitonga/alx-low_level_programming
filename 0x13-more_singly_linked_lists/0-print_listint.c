#include "lists.h"
#include <stdio.h>

/**
 * print_listint - Should Prints the elements of  listint_t list.
 * @h: A Linked lisyt to the head of the list_t list.
 *
 * Return: Shows the  number of nodes (numnodes) in the list_t list.
 */
size_t print_listint(const listint_t *h)
{
	size_t nodenums = 0;

	while (h)
	{
		nodenums++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (nodenums);
}
