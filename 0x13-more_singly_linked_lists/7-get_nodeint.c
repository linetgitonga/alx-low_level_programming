#include "lists.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * get_nodeint_at_index - returns the node
 * 				 at a certain index in a linked list
 * @head: the first node in the linked list
 * @index: the index of the node supposed to return
 *
 * Return: NULL or the  pointer to the node we're looking for
 **/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int o = 0;
	listint_t *tep = head;

	while (tep && o < index)
	{
		tep = tep->next;
		o++;
	}

	return (tep ? tep : NULL);
}
