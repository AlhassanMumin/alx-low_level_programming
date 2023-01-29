#include <stdio.h>
#include <math.h>
#include "search_algos.h"

size_t min(size_t a, size_t b)
{
	return (b > a ? a : b);
}

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
		if (array[mid] == value)                                                      		return mid;
	}
	return -1;
}

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
