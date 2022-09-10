#include <stdlib.h>
/**
 * _calloc - the calloc function that allocate memory
 * @nmemb: the number of blocks of memory to allocate
 * @size: the size of each block of memory
 * Return: pointer to the memory or Null on failure
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *caloc;

	if (nmemb == 0 || size == 0)
		return (NULL);
	caloc = calloc(nmemb, size);
	if (caloc == NULL)
		return (NULL);
	return (caloc);
}
