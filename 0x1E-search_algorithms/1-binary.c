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
	size_t L = 0, R = size, mid = 0, ind;

	if (array == NULL)
		return (-1);
	while (L < R)
	{
		printf("Searching in array: ");
		for (ind = L; ind < R - 1; ind++)
			printf("%d, ", array[ind]);
		printf("%d\n", array[ind]);
		if (array[mid] == value)
			return (mid);
		mid = floor((L + R) / 2);
		if (array[mid] > value)
			R = mid - 1;
		else
			L = mid + 1;
	}
	return (-1);
}
