#include <math.h>
#include <stdio.h>
#include "search_algos.h"
/**
 * binary_search - Searches for a value in a sorted array
 * 		   of integers using binary search
 * @array: A pointer to the first element of the array to search
 * @size: The number of elements in the array
 * @value: The value to search for
 *
 * Return: If the value is not present or the array is NULL, -1
 * 		Otherwise, the index where the value is located
 */
int binary_search(int *array, size_t size, int value)
{
	size_t L, R, mid;

	if (array == NULL)
		return (-1);
	for (L = 0, R = size - 1; R >= L;)
	{
		printf("Searching in array: ");
		for (mid = L; mid < R; mid++)
			printf("%d, ", array[mid]);
		printf("%d\n", array[mid]);
		if (array[mid] == value)
			return (mid);
		mid = floor((R + L) / 2);
		if (array[mid] > value)
			R = mid - 1;
		else
			L = mid + 1;
	}
	return (-1);
}
