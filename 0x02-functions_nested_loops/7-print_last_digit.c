#include "main.h"
/**
 * print_last_digit - This fuxn will prit the last digit
 * @last: the number which last digit is determined
 * Return The last digit to be returned
 */
int print_last_digit(int last)
{
	_putchar(last % 10);
	return (last % 10);
}

