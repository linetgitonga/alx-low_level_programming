#include "lists.h"

/**
 * 3_add_node_end - a function that adds a new node at the end of
 * a list_t list.
 * @head: The linked list head
 * @string: The string data of the list
 *
 *
 **/
list_t *add_node_end(list_t **head, const char *string)
{
	list_t *new = malloc(sizeof(list_t));
	list_t *ptr;
	int strLen;

	if (new != NULL)
	{
		strLen = _strlen(string);
		new->string = strdup(string);
		new->len = strLen;
		new->next = NULL;

		if (*head == NULL)
			*head = new;
		else
		{
			ptr = *head;
			while (ptr->next != NULL)
				ptr = ptr->next;
			ptr->next = new;
		}
	}

	return (new);
}

/**
 * _strlen - This function returns the length of a string.
 * @w: The string to return the length
 *
 * Return: Length of w
 */
int _strlen(const char *w)
{
	long int length = 0;

	while (w != NULL && w[length] != '\0')
		length++;

	return (length);
}
