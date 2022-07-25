#include <stdlib.h>
/**
 * create_array - it create some arry
 * @size: size of allocated memory
 * @c: the character to be assigned to  the array
 * Return: NULL if malloc fails and pointer to memory if successful
 */
char *create_array(unsigned int size, char c)
{
	int i;
	char *array;

	array = malloc(size);
	if (size == 0 || array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
	array[i] = c;
	}
	return (array);
}
