/*
 * Task: 5-free_listint2.c
 * Author: linetgitonga
 **/

#include "lists.h"

/**
 * 5-free_listint2 - Fuction that frees a listint_t list.
 * @head: A pointer to the address of the head of the listint_t list.
 *
 * Description: Sets the head to NULL.
 */
void free_listint2(listint_t **head)
{
	listint_t *tep;

	if (head == NULL)
		return;

	while (*head)
	{
		tep = (*head)->next;
		free(*head);
		*head = tep;
	}

	head = NULL;
}
