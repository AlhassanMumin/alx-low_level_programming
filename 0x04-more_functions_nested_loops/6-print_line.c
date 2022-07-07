#include "main.h"
/**
 * print_lin - Prints the length of line.
 * @n: The number that determine line length
 */
void print_line(int n)
{
	int k;

	if (n > 0)
	{
		for (k = 0; k < n; k++)
			_putchar('_');
	}

	_putchar('\n');
}
