#include <string.h>
#include "main.h"
/**
 * puts2 - prints any other character
 * @str: the pointer to the string of characters
 */
void puts2(char *str)
{
	int len, i;

	len = strlen(str);
	for (i = 0; i < len; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}

	}
	_putchar('\n');
}
