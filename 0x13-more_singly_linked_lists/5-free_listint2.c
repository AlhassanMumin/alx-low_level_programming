#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2 - A function that frees a memory
 * @head: the pointer to the first node
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
		return;

	while (*head)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}
	head = NULL;
}
