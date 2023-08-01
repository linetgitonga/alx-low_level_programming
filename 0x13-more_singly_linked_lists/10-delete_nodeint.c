/*
 * File: 10-delete_nodeint.c
 * Author: Linet gitonga
 */

#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - Should delete a node at a given positiion.
 * @head: First node address.
 * @index: Position of the node to delete.
 * Return: If success 1.
 **/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int fw;
	listint_t *curnt, *next;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		next = (*head)->next;
		free(*head);
		*head = next;
		return (1);
	}
	curnt = *head;
	for (fw = 0; fw < index - 1; fw++)
	{
		if (curnt->next == NULL)
			return (-1);
		curnt = curnt->next;
	}
	next = curnt->next;
	curnt->next = next->next;
	free(next);
	return (1);
}
