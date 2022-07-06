#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lower_case;
	char nl = '\n';

	for (lower_case = 'a'; lower_case <= 'z'; lower_case++)
	{
		_putchar(lower_case);
	}
	_putchar(nl);

	return (0);
}
