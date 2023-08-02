/*
 * Task 3: 3-add_nodeint_end.c
 * Author: gitongalinet
 */ 
#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * add_nodeint_end - Adds a new node at the end of a 
 * listint_t list.
 * @head: address pointer of the  head of the listint_t list.
 * @n: Datatype integer for the new node to contain.
 * Return: If the function fails - NULL. Else the address of the new element.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *nodenew, *lasttemp;

	nodenew = malloc(sizeof(listint_t));
	if (nodenew == NULL)
		return (NULL);

	nodenew->n = n;
	nodenew->next = NULL;

	if (*head == NULL)
		*head = nodenew;

	else
	{
		lasttemp = *head;
		while (lasttemp->next != NULL)
			lasttemp = lasttemp->next;
		lasttemp->next = nodenew;
	}

	return (*head);
}
