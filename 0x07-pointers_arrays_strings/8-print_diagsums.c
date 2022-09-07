#include <stdio.h>
#include <string.h>
/**
 * print_diagsuums - It prints the sums of left and right diagonals
 * @a: the square matrix
 * @size: the size of the square size
 */
void print_diagsums(int *a, int size)
{
	int index, sum1 = 0, sum2 = 0;

	for (index = 0; index < size; index++)
	{
		sum1 += a[index];
		a += size;						
	}
	a -= size;
	for (index = 0; index < size; index++)						{
		sum2 += a[index];
		a -= size;
	}
	printf("%d, %d\n", sum1, sum2);
}

