#include <stddef.h>
#include "lists.h"
/**
 * add_nodeint_end - the function to put a node at the end
 * @head: the pointer to the first node of the list
 * @n: the value of the integer member
 * Return: the address of the new list on success
 * 	   NUll on failure
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;

 	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	if (*head == NULL)
		*head = new;
	else
	{
		listint_t *last_node = *head;
		while (last_node->next != NULL)
		{
			last_node = last_node->next;
		}
		last_node->next = new;
	}
	return (*head);
}
