#include <string.h>
#include "main.h"
/**
 * puts_half - prints half of the string
 * @str: the pointer to the string
 */
void puts_half(char *str)
{
	int len, i;

	len = strlen(str);
	if (len % 2 == 0)
	{
		for (i = (len - (len / 2)); i < len; i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		for (i = (len - 1) / 2; i < len; i++)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}

