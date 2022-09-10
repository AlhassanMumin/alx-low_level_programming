#include <stdlib.h>
/**
 * array_range - the function to create array of integers
 * @min: the smaller value
 * @max: the bigger value
 * Return: pointer to the array created or NULL on failure
 */
int *array_range(int min, int max)
{
	int dif, *arr, i;

	dif = max - min;

	if (dif < 0)
		return (NULL);
	arr = malloc(sizeof(int) * (dif + 1));
	if (arr == NULL)
		return (NULL);
	for (i = 0; i <= dif; i++)
		arr[i] = min++;
	return (arr);
}
