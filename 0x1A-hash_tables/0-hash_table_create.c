#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_create - create a new hash table
 * @size: the size of the array
 * Return: pointer to the newly created hash table
 */

 hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *ht = NULL;

	ht = malloc(sizeof(hash_table_t));
	if (ht == NULL)
		return (NULL);

	ht->array = malloc(sizeof(hash_node_t*) * size);
	if (ht->array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		ht->array[i] = NULL;
	}

	return (ht);
}
