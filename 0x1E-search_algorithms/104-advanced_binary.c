#include <math.h>
#include <stdio.h>
#include "search_algos.h"
/**
 * advanced_binary - function to perform adv binary search
 *
 * @array: A pointer to the first element of the array
 * @size: The number of elements in the array
 * @value: The value to search for.
 *
 * Return: If the value is not present or the array is NULL, -1
 * 	   Otherwise, the first index where the value is located
 */

int advanced_binary(int *array, size_t size, int value)
{
	size_t L = 1, R = size, mid = 0, ind;
	

	if (array == NULL)
		return (-1);
	while (L < R)
	{
		printf("Searching in array: ");
		for (ind = L - 1; ind < R - 1; ind++)			
			printf("%d, ", array[ind]);
		printf("%d\n", array[ind]);
		
		mid = floor((L + R) / 2);
		if (array[mid] > value)
			R = mid - 1;		
		else
			L = mid + 1;
		
		if (array[mid] == value)
			return mid;
	}
	return -1;
}	
