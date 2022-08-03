#include "function_pointers.h"
/**
 * array_iterator - the function to display array
 * @array: the  array passed in
 * @size: the size of the array passed in
 * @action: the  pointer to the function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long i;

	if (array == NULL || action == NULL)
	{
		return;
	}
	for (i = 0; i < size; i++)
	{
		(*action)(*(array + i));
	}
}
