#include <math.h>
#include "main.h"
/**
 * print_number - this will print some integer number
 * @n: the number to be printed
 */
void print_number(int n)
{
	if (n < 0)
	{
		n = n * -1;
		_putchar('-');
	}
	if ((n / 10 > 0))
		print_number(n / 10);
	_putchar((n % 10) + '0');
}
