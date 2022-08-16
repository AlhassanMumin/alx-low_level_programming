#include "lists.h"
#include <stdlib.h>
/**
 * get_nodeint_at_index - function to get a node at nth index
 * @head: the pointer to the first node
 * @index: the index to serarch for in the list
 * Return: the nth node on success or NULL on failure
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node;

	for (node = 0; node < index; node++)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
