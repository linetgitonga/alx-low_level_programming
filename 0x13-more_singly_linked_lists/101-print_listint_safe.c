#include "lists.h"
#include <stdio.h>

/**
 * print_listint_safe - function that prints a linked list with a loop  should be safely.
 * @head: this is the pointer to the 1st node of the linked list
 * Return: new_node
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *m_n = NULL;
	const listint_t *l_new = NULL;
	size_t cont = 0;
	size_t new_n;

	m_n = head;
	while (m_n)
	{
		printf("[%p] %d\n", (void *)m_n, m_n->n);
		cont++;
		m_n = m_n->next;
		l_new = head;
		new_n = 0;
		while (new_n < cont)
		{
			if (m_n == l_new)
			{
				printf("-> [%p] %d\n", (void *)m_n, m_n->n);
				return (cont);
			}
			l_new = l_new->next;
			new_n++;
		}
		if (!head)
			exit(98);
	}
	return (cont);
}
