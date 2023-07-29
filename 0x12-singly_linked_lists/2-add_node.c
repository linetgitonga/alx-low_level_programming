#include "lists.h"

/**
 * add_node - the function meant to  add a new node at the beginning of
 * a list_t list.
 * @head: The linked list head
 * @string: The string data of the list
 *
 * Return: pointer to the node added
 */
list_t *add_node(list_t **head, const char *string)
{
	list_t *new = malloc(sizeof(list_t));
	int strLen;

	if (new != NULL)
	{
		strLen = _strlen(string);
		new->string = strdup(string);
		new->len = strLen;
		new->next = *head;
		*head = new;
	}

	return (new);
}

/**
 * _strlen - This function returns the length of a string.
 * @d: The string to return the length
 *
 * Return: Length of d
 */
int _strlen(const char *d)
{
	long int len = 0;

	while (d != NULL && d[len] != '\0')
		len++;

	return (len);
}
