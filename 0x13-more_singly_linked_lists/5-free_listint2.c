#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2 - A function that frees a memory
 * @head: the pointer to the first node
 */
void free_listint2(listint_t **head)
{
	listint_t *curr = *head, *tmp;

	if (*head == NULL)
		return;

	while (curr != NULL)
	{
		tmp = curr;
		curr = curr->next;
		free(tmp);
	}
	*head = NULL;
}
