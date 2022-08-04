#include <stdarg.h>
#include <stdio.h>
/**
 * printt_number - print numbers inputed
 * @separator:  the separator variable
 * @n:  the number of varaibles to print
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int  i;
	va_list ap;

	va_start(ap, n);
	for (i = 0; i < n - 1; i++)
	{
		if ((*separator))
		{
			printf("%d%s", (int)va_arg(ap, const unsigned int),
				separator);
		}
	}
	printf("%d", (int)va_arg(ap, const unsigned int));
	va_end(ap);
	printf("\n");
}
