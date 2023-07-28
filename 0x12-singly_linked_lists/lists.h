#ifndef _LIST_H
#define _LIST_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * struct list_s - this describes a singly linked list
 * @str: string - defines the string which has been malloc'ed
 * @next: points to the next node
 * @len describes the length of the string parsed
 * Description: singly linked list node structure
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;
size_t list_len(const list_t *h);
size_t print_list(const list_t *h);
list_t *add_node(list_t **head, const char *str);
int _strlen(const char *s);
char *_strcpy(char *dest, const char *src);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);
void before_main(void) __attribute__((constructor));
#endif
