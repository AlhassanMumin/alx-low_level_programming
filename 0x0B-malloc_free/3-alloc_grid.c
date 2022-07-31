#include <stdlib.h>
/**
 * alloc_grid - it will allocate a pointer to a 2D array
 * @width: the width of the 2D array
 * @height: the height of the 2D array
 * Return: Pointer to a 2D array or NULL if failure
 */
int **alloc_grid(int width, int height)
{
	int i;
	int **d_array;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	d_array = malloc(sizeof(int *) * (width));
	if (d_array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < width; i++)
	{
		d_array[i] = malloc(sizeof(int) * height);;
	}
	for (i = 0; i < height; i++)
	{
		free(d_array[i]);
	}
	free(d_array);
	for (i = 0; i < width; i++)
	{
		for (j = 0; j < height; j++)
		{
			d_array[i][j] = 0;
		}
	}
	return (d_array);
}
