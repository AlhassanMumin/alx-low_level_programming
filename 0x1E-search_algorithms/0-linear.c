#include <stdio.h>
#include "search_algos.h"
/**
 * linear_search - searches for a value in an array of integers
 * 			      using the Linear search algorithm
 * @array: A pointer to the first element of the array
 * @size: The number of elements in the array
 * @value: The value to search for
 *
 * Return: If the value is not present or the array is NULL, -1
 * 	   Otherwise, the first index where the value is located.
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array == NULL)
		return (-1);
	while (i < size)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
		i++;
	}
	return (-1);
}
