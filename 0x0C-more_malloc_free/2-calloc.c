#include <stdlib.h>
/**
 * _calloc - thee function to allocate a memory
 * @nmemb: the number of blocks of memory to allocate
 * @size: the size of each block of memory
 * Return: a pointer to the allocated memory or
 * 	   NULL on failure
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int *caloc;

	if (nmemb == 0 || size == 0)
		return (NULL);
	caloc = calloc(nmemb, size);
	if (caloc == NULL)
		return (NULL);
	return (caloc);
}
