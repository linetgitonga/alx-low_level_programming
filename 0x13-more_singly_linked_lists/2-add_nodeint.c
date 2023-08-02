/*
 * Task 2: 2-add_nodeint.c
 * Author: linetgitonga
 */

#include "lists.h"

/**
 * add_nodeint - Adds  new node at the
 * beginning  of a listint_t list.
 * @head: A pointer to the address of the  head of the listint_t list.
 * @n: Integer for the new node to contain.
 * Return: NULL- If the function fails.
 *         Otherwise - the address of the new element.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newelemnt;

	newelemnt = malloc(sizeof(listint_t));
	if (newelemnt == NULL)
		return (NULL);

	newelemnt->n = n;
	newelemnt->next = *head;

	*head = newelemnt;

	return (newelemnt);
}
