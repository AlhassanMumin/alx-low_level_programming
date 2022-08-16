#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - A function that frees a memory
 * @head: the pointer to the first node
 * Return: the first node data
 */
int pop_listint(listint_t **head)
{
	listint_t *curr = *head, *tmp;
	int i;

	i = curr->n;
	tmp = curr;
	*head = curr->next;
	free(tmp);
	return (i);
}
