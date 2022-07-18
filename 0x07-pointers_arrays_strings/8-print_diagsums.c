#include <stdio.h>
#include <string.h>
/**
 * print_diagsuums - It prints the sums of left and right diagonals
 * @a: the square matrix
 * @size: the size of the square size
 */
void print_diagsums(int *a, int size)
{
	int i, j, diag_left, diag_right;

	diag_left =  0;
	diag_right = 0;
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
			{
				diag_left = diag_left + a[i][j];
			}
			else if (i + j == size -1)
			{
				diag_right = diag_right + a[i][j];
			}
		}
	}
	printf("%d, %d\n",diag_left, diag_right);
}

