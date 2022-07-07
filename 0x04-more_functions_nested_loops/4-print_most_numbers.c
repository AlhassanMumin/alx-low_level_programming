#include "main.h"
/**
 * print_most_numbers - This func will print most numbers
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (i != 2)
		{
			if (i != 4)
			{
			_putchar(i + '0');
			}
		}
	}
	_putchar('\n');
}
