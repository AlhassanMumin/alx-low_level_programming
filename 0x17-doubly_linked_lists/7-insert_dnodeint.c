#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a node at a particular index
 * @h: the head pointer
 * @idx: the index to insert a new node
 * @n: the value of the new node
 *
 * Return: the address of the new node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp = *h, *new_node;
	unsigned int count;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}
	else
	{
		for (count = 0; count < idx; count++)
		{
			if (tmp->next == NULL)
			{
				if (count + 1 == idx)
					return (add_dnodeint_end(&*h, n));
				else
					return NULL;
			}

			tmp = tmp->next;
		}
	new_node->n = n;
	new_node->next = tmp;
	new_node->prev = tmp->prev;
	tmp->prev->next = new_node;
	tmp->prev = new_node;
	}
	return (new_node);
}
