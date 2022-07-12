#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/**
 * print_number - this will print an integer
 * @n: the integer to be printerd
 */
void print_number(int n)
{
	int count, pw, val, rem, j;

	count = 0;
	if (n < 0)
	{
		n = n * -1;
		_putchar('-');
	}
	rem = n % 10;
	val = n = n - rem;
	while (val > 9)
	{
		val = val / 10;
		count++;
	}
	pw = pow(10, count);
	while (count)
	{
		j = floor(n / pw);
		_putchar(j + '0');
		n = n - pw * j;
		pw = pw / 10;
		count--;
	}
	_putchar(rem + '0');
	_putchar('\n');
}

