#include "lists.h"

/**
 * print_list - the a function is meant prints all the elements of a list_t list.
 *
 * @h:displays the list
 *
 * Return:The integer declred (int )outputs size of the list
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;
	char *string;

	while (h != NULL)
	{
		printf("[%d] ", h->len);
		string = h->string;
		if (string == NULL)
			string = "(nil)";
		printf("%s\n", string);
		h = h->next;
		++count;
	}
	return (count);
}
