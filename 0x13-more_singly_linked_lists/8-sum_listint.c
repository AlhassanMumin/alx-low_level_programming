#include "lists.h"
/**
 * sum_listint - a function to sum the list
 * @head: the pointer to the firest node
 * Return: the sum of the dat in the list
 */
int sum_listint(listint_t *head)
{
	int i = 0;

	while (head)
	{
		i += head->n;
		head = head->next;
	}
	return (i);
}
