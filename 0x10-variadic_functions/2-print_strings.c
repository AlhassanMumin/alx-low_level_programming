#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - print strings
 * @separator: the separator of the strings
 * @n: The number of strings passed
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;
	
	va_start(ap, n);
	for (i = 0; i < n - 1; i++)
	{
		printf("%s%s", va_arg(ap, char*),
			separator);
	}
	printf("%s\n", va_arg(ap, char*));
	va_end(ap);
}
