/*
 * Task: 8-sum_listint.c
 * Author: Muchunu Linet
 */

#include "lists.h"

/**
 * sum_listint Sums all the  data (n) of a listint_t list.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: If the list is empty - 0.
 *         Otherwise -Calculates the sum of all the data.
 */
int sum_listint(listint_t *head)
{
	int sumstot = 0;
	listint_t *tep = head;

	while (tep)
	{
		sumstot += tep->n;
		tep = tep->next;
	}

	return (sumstot);
}
