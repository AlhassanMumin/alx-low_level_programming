#include "lists.h"
/**
 * get_dnodeint_at_index - get a node at an index
 * @head: the head pointer of the lsit
 * @index: the index of the node to get
 * Return: the particular node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int  val = 0;

	while (head)
	{
		if (val == index)
			return (head);
		head = head->next;
		val += 1;
	}

	return (NULL);
}	
