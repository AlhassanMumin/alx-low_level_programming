#include "main.h"
/**
 * print_binary - the functio to print in binary
 * @n: the passed in value
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	_putchar((n & 1) + '0');
}
