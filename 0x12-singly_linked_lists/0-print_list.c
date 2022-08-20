#include "lists.h"
#include <stdio.h>
/**
 * print_list - the function to print list
 * @h: the pointer to the first node in the list
 * Return: the number of elements
 */
size_t print_list(const list_t *h)
{
	size_t nodes = 0;
	
	if (h == NULL)
		return (0);
	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		nodes++;
		h = h->next;
	}
	return (nodes);
}
