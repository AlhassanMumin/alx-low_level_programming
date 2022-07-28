#include <stdlib.h>
/**
 * malloc_checked - it  allocates a memory
 * @b: The sizeo of memory to allocate
 * Return: pointer to allocated memory on success
 */
void *malloc_checked(unsigned int b)
{
	void *alloc_mem;

	alloc_mem = malloc(b);
	if (alloc_mem == NULL)
	{
		exit(98);
	}
	return (alloc_mem);
}
