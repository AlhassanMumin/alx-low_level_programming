#include "main.h"
/**
 * print_line - prints dashes continuously
 * @n: The argument that determines the number of dashes
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
