#include "lists.h"

/**
 * find_listint_loop - Function that finds the loop in a linked list
 * @head: linked list to search for
 *
 * Return: address of the node where the loop starts, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slowst = head;
	listint_t *fastst = head;

	if (!head)
		return (NULL);

	while (slowst && fastst && fastst->next)
	{
		fastst = fastst->next->next;
		slowst = slowst->next;
		if (fastst == slowst)
		{
			slowst = head;
			while (slowst != fastst)
			{
				slowst = slowst->next;
				fastst = fastst->next;
			}
			return (fastst);
		}
	}

	return (NULL);
}
