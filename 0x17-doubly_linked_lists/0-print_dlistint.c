#include <stdio.h>
#include "lists.h"
/**
 * print_dlistint - it prints a list
 * @h: the head pointer
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int num_nodes = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		num_nodes += 1;
	}

	return (num_nodes);
}
