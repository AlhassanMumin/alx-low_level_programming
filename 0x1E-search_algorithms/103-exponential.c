#include <stdio.h>
#include <math.h>
#include "search_algos.h"
/**
* min - find the smaller value
*
* @a: the first value
* @b: the second value
*
* Return: the smaller value
*/

size_t min(size_t a, size_t b)
{
	return (b > a ? a : b);
}
/**
  * binary_searcher - Searches for a value in a sorted array
  *                  of integers using binary search.
  * @array: A pointer to the first element of the array to search.
  * @L: The starting index of the [sub]array to search.
  * @R: The ending index of the [sub]array to search.
  * @value: The value to search for.
  *
  * Return: If the value is not present or the array is NULL, -1.
  *         Otherwise, the index where the value is located.
  */

int binary_searcher(int *array, int value, size_t L, size_t R)
{
	size_t mid = 0, ind;
	if (array == NULL)
		return (-1);

	while (L < R)
	{
		printf("Searching in array: ");
		for (ind = L; ind < R -1; ind++)
			printf("%d, ", array[ind]);
		printf("%d\n", array[ind]);

		mid = floor((L + R) / 2);
		if (array[mid] > value)
			R = mid;
		else
			L = mid + 1;
		if (array[mid] == value)
			return mid;
	}
	return -1;
}

/**
  * exponential_search - Searches for a value in a sorted array
  *                      of integers using exponential search.
  * @array: A pointer to the first element of the array to search.
  * @size: The number of elements in the array.
  * @value: The value to search for.
  *
  * Return: If the value is not present or the array is NULL, -1.
  *         Otherwise, the index where the value is located.
  */

int exponential_search(int *array, size_t size, int value)
{
	size_t bound = 1, min_val;

	if (array == NULL)
		return (-1);

	while (bound < size && array[bound] < value)
		bound *= 2;
	min_val = min(bound + 1, size);

	return binary_searcher(array, value, bound/2, min_val);
}
