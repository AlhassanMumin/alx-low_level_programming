#include "lists.h"
/**
 * dlistint_len - returns the number of nodes
 * @h: the head pointer
 * Return: the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	int num_nodes = 0;

	while (h)
	{
		h = h->next;
		num_nodes += 1;
	}

	return (num_nodes);
}
