#include "lists.h"
/**
 * add_dnodeint_end - add node at the end
 * @head: the head of the doubly linked list
 * @n: the data in the list
 * Return: the address of the new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *tmp = *head;

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return NULL;
	
	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
	}
	else
	{
		while (tmp->next != NULL)
			tmp = tmp->next;
	
		tmp->next = new_node;
		new_node->prev = tmp;
	}

	return (new_node);
}
