#include "lists.h"
#include <stddef.h>
/**
 * add_nodeint - the function to add a new node
 * @n: the iteger member
 * Return: address of new node created  or
 * NULL if the malloc fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	
	new->n = n;
	new->next = *head;
	*head = new;

	return (*head);
}
