#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: pointer to the first node in the list
 *
 * Return: pointer to the first node in the new list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prevpg = NULL;
	listint_t *nextpg = NULL;

	while (*head)
	{
		nextpg = (*head)->next;
		(*head)->next = prevpg;
		prevpg = *head;
		*head = nextpg;
	}

	*head = prevpg;

	return (*head);
}
