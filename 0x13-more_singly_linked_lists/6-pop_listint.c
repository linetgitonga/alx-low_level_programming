/*
 * Task: 6-pop_listint.c
 * Author: linetgitonga
 */

#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t list.
 * @head: pointer to the address of the head of the listint_t list.
 *
 * Return: If the linked list is zero.
 *         Otherwise - The head node's data (n).
 */
int pop_listint(listint_t **head)
{
	listint_t *tep;
	int retu;

	if (*head == NULL)
		return (0);

	tep = *head;
	retu = (*head)->n;
	*head = (*head)->next;

	free(tep);

	return (retu);
}
