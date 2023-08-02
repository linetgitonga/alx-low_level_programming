/*
 * Task 1: 1-listint_len.c
 * Auth: linetgitonga
 */

#include "lists.h"

/**
 * listint_len - function that should returns the 
 * number of elements in a linked lists
 * @h: linked list of type listint_t e
 * Return: displays number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t numnodes = 0;

	while (h)
	{
		numnodes++;
		h = h->next;
	}

	return (numnodes);
}
