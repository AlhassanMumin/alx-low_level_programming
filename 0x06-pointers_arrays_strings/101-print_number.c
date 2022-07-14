#include <math.h>
#include "main.h"
/**
 * print_number - this will print some integer number
 * @n: the number to be printed
 */
void print_number(int n)
{
	unsigned int count, pw, rem, j, val, k;

	if (n < 0)
	{
		n = n * -1;
		_putchar('-');
	}
	rem = n % 10;
	pw = 1;
	count = 0;
	val = n = n - rem;
	while (val > 9)
	{
		val = floor(val / 10);
		count = count + 1;
	}
	k = count;
	while (k)
	{
		pw = pw * 10;
		k--;
	}
	while (count)
	{
		j = floor(n / pw);
		n = n - (pw * j);
		pw = pw / 10;
		_putchar(j + '0');
		count--;
	}
	_putchar(rem + '0');
}



