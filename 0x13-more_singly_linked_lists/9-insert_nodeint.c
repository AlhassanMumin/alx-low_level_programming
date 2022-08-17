#include "lists.h"
#include <stdlib.h>
/**
 * insert_nodeint_at_index - the function to insert a node at an index
 * @head: the pointer to the first node
 * @idx: the index to insert the node
 * @n: the data value of the inserted node
 * Return: the address of head
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node = *head, *tmp;
	unsigned int i;

	tmp = malloc(sizeof(listint_t));
	if (tmp == NULL)
		return (NULL);
	tmp->n = n;
	if (idx == 0)
	{
		tmp->next = *head;
		*head = tmp;
		return (*head);
	}
	for (i = 0; i < idx; i++)
	{
		if (new_node == NULL || new_node->next == NULL)
			return (NULL);
		new_node = new_node->next;
	}
	tmp->next = new_node->next;
	new_node = tmp;
	return (*head);
}
