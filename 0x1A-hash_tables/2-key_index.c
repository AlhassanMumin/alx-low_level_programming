#include "hash_tables.h"
/**
 * key_index - the function will give the index of of a key
 * @key: the key  which index is to be deermined
 * @size: the size of the hash table
 *
 * Return: the index
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
