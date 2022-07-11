
#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * print_rev - The func that will print the string in reverse
 *
 * @s: The point which  value is to be printed
 */
void print_rev(char *s)
{
	int len, i;

	len = strlen(s);
	for (i =len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
