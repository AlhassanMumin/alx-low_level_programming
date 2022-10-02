#include "lists.h"
#include <stdio.h>
/**
 * delete_dnodeint_at_index - delete a node at index
 * @head: the head of the list
 * @index: the index to delete the node
 * Return: 1 of deleted or -1 other wise
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp = *head, *ptr = NULL;
	unsigned int count;


	if (index == 0 && tmp != NULL)
	{
			ptr = (*head);
			if ((*head)->next != NULL)
				(ptr) = (*head)->next;
			(ptr)->prev = NULL;
			free(*head);
			(*head) = ptr;
			return (1);
	}
	else
	{
		for (count = 1; count < index; count++)
		{
			tmp = tmp->next;
			if (tmp->next->next == NULL)
			{
				ptr = tmp->next;
				tmp->next = NULL;
				ptr->prev = NULL;
				free(ptr);
				return (1);
			}
		}
		ptr = tmp->next;
		tmp->next = ptr->next;
		ptr->next->prev = tmp;
		ptr->prev = NULL;
		ptr->next = NULL;
		free(ptr);
		return  (1);
	}

	return (-1);
}
