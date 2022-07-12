#include <stdio.h>
#include "main.h"
/**
 * print_array - This func  will print array of n elements
 * @a: the  array containing the elements
 * @n: the number of elements determined by n
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d, ", a[i]);
	}
	printf("\n");
}

