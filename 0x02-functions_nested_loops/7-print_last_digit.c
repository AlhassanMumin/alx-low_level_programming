#include "main.h"
/**
 * print_last_digit - This fuxn will prit the last digit
 * @last: the number which last digit is determined
 * Return The last digit to be returned
 */
int print_last_digit(int last)
{
	last = last % 10;

	if (last < 0)
	{
		last *= -1;
		_putchar(last);
	}
	else
	{
		_putchar(last);
	}
	return (last % 10);
}

