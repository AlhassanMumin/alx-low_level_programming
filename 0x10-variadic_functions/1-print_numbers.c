#include <stdarg.h>
#include <stdio.h>
/**
 * printt_numbers - print numbers inputed
 * @separator:  the separator variable
 * @n:  the number of varaibles to print
 * @...: the variadic function notation
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int  i;
	va_list ap;
	
	if (n <= 0)
		return;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		if ((*separator && (n - 1)))
		{
			printf("%d%s", va_arg(ap, int), separator);
		}
	}
	printf("%d\n", va_arg(ap, int));
	va_end(ap);
}
