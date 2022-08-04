#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - it will sum the passed in values
 * @n: the number of values passed in
 * @...: the variadic notationt 
 * Return: the sum of the values or o0 if no size is specified
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list pa;
	unsigned int i, sum = 0;

	va_start(pa, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(pa, int);
	}

	va_end(pa);

	return (sum);
}
