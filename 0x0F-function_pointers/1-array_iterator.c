#include "function_pointers.h"
/**
 * arrray_iterator -  the array passed in
 * @size: the size of the array
 * @action: pointer to  the function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long i;

	if (array == NULL || size == NULL)
	{
		return;
	}
	for (i = 0; i < size; i++)
	{
		(*action)(*(array + i));
	}
}
