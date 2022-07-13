#include <string.h>
#include "main.h"
/**
 * reverse_array - it will reeverse array content
 * @a:  the array to be reversed
 * @n: the size of  the array
 */
void reverse_array(int *a,  int n)
{
	int i, j, b[sizeof(a) / 4];

	for (i = n - 1, j = 0; i >= 0; i--, j++)
	{
		b[j] = a[i];
	}
	for (i = 0; i < n; i++)
	{
		a[i] = b[i];
	}
}





