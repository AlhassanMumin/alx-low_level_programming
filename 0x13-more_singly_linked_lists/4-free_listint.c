#include "lists.h"
#include <stdlib.h>
/**
 * free_listint - the function to free listint_t
 * @head: the pointer to the first node of the linked list
 */
void free_listint(listint_t *head)
{
	listint_t *tmp, *curr = head;

	while (curr)
	{
		tmp = curr;
		curr = curr->next;
		free(tmp);
	}
}
