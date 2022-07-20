#include "main.h"
#include <string.h>
/**
 * _print_rev_recursion - it will print a string in reverse
 * @s: The pointer to the string to be printed
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}

