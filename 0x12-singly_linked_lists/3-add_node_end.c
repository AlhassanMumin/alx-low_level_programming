#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node_end - a function to add a node at the end
 * @head: pointer to the head pointer
 * @str: the string to duplicate
 * Return: the address of the new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *tmp = *head, *curr;
	unsigned int len = 0;

	curr = malloc(sizeof(list_t));
	if (curr == NULL)
		return (NULL);
	while (*(str + len))
		len++;
	curr->len = len;
	curr->str = strdup(str);
	curr->next = NULL;
	if (*head == NULL)
	{
		*head = curr;
	}
	else
	{
		curr->str = strdup(str);	
		while (tmp->next != NULL)
		{
			tmp = tmp->next; 
		}	
		tmp->next = curr;	
	}
	return (curr);
}
