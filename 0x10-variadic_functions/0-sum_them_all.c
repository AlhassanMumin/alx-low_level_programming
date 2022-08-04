#include <stdarg.h>
/**
 * sum_them_all - it will sum the passed in values
 * @n: the number of values passed in
 * Return: the sum of the values or o0 if no size is specified
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
        int sum = 0;
	va_list ap;

	if (n == 0)
	{
		return (0);
	}
	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(ap, int);
	}
	va_end(ap);
	return (sum);
}
