#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - Function to Insert a new node at a  positiion given.
 * @head: Supposed to be the first node address.
 * @idx: The Position of the new node to be inserted in.
 * @n: Data of the new node.
 * Return: The address of the new node.
 **/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *nwnode, *temp;
	unsigned int z = 0;

	if (*head == NULL && idx != 0)
		return (NULL);
	if (idx != 0)
	{
	temp = *head;
	for (; z < idx - 1 && temp != NULL; z++)
		temp = temp->next;
	if (temp == NULL)
		return (NULL);
	}
	nwnode = malloc(sizeof(listint_t));
	if (nwnode == NULL)
		return (NULL);
	nwnode->n = n;
	if (idx == 0)
	{
		nwnode->next = *head;
		*head = nwnode;
		return (nwnode);
	}
	nwnode->next = temp->next;
	temp->next = nwnode;
	return (nwnode);
}
