#include "lists.h"
/**
 * list_len -  the funct to print the list of the nodes
 * @n: the head passed in
 * Return:  the number of nodes in the list
 */
size_t list_len(const list_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
