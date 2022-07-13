#include <string.h>
#include "main.h"
/**
 * reverse_array - it will reeverse array content
 * @a:  the array to be reversed
 * @n: the size of  the array
 */
void reverse_array(int *a,  int n)
{
	int t, i;

	for (i = 0; i <= n / 2; i++)
	{
		t = a[i];
		a[i] = a[n - i - 1];
		a[n - i -1] = t;
	}
}





