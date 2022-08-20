#include <stdlib.h>
#include "lists.h"
/**
 * free_list - frees tge list
 * @head: the pointer to the first node in the list
 */
void free_list(list_t *head)
{
	list_t *tmp;
	
	if (head == NULL)
		return;
	while (head != NULL)
	{
		free(head->str);
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
