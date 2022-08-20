#ifndef LISTS_H
#define LISTS_H

#include <stdlib.h>

/**
 * struct list_s - the node struncture
 * @str: the sttring constant member
 * @len: the integer member
 * @next: the pointer to node structrue
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
}list_t;

size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
size_t print_list(const list_t *h);

#endif
