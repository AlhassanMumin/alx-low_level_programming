#include "main.h"
/**
 * print_numbers - Prints the numbers from 0-9.
 */
void print_line(int n)
{

	while (n)
	{
		_putchar('_');
		n--;
	}

	_putchar('\n');
}
