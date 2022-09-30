#include "lists.h"
/**
 * free_dlistint - frees a linked list
 * @head: the head of the list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	if (head == NULL)
		return;

	while (head->next)
	{
		tmp = head->next;
		(head->next)->prev = NULL;
		free(head);
		head = tmp;
	}
	free(head);
}
