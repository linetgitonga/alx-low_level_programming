#include "lists.h"
#include <stdio.h>

/**
 * free_listint_safe - Function meant to  frees a linked list
 * @h: the pointer to the first node in the linked list
 *
 * Return:returns the number of elements in the freed list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t lengthy = 0;
	int differences;
	listint_t *temp;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		differences = *h - (*h)->next;
		if (differences > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			lengthy++;
		}
		else
		{
			free(*h);
			*h = NULL;
			lengthy++;
			break;
		}
	}

	*h = NULL;

	return (lengthy);
}
