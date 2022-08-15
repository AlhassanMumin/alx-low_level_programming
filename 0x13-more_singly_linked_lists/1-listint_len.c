#include "lists.h"
#include <stddef.h>
/**
 * listint_len - the func to count the number of nodes  in the list
 * @h: the pointer to the first node
 * Return: the number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
