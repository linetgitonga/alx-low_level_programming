#include "lists.h"
#include <stdlib.h>

/**
 * free_listint -its supposed to frees a list.
 * @head: indicates the address of the first node of a list.
 * fp : THey are my variables.
 **/

void free_listint(listint_t *head)
{
	listint_t *fp, *fp2;

	fp = head;
	while (fp != NULL)
	{
		fp2 = fp->next;
		free(fp);
		fp = fp2;
	}
}
