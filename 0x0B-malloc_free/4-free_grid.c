#include <stdlib.h>
/**
 * free_grid - it frees memory
 * @grid: the memory to be freed
 * @height: the number if allocated memory
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
}
