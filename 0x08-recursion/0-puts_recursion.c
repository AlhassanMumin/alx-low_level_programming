#include "main.h"
#include <string.h>
/**
 * _puts_recursion - this will print the alphabets of a
 * string recursivesly
 * @s: the character string to be printed
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion((s+1));
	}
	else if (*s == '\0')
	{
		_putchar('\n');
	}
}
