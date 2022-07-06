#include "main.h"
/**
 * print alphabet -> print lowercase alphabet
 *
 */
void print_alphabet(void)
{
	char lower_case;
	char nl = '\n';

	for (lower_case = 'a'; lower_case <= 'z'; lower_case++)
	{
		_putchar(lower_case);
	}
	_putchar(nl);

}
