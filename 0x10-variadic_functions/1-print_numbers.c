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
	
	if (n <= 0)
		return;

	va_start(ap, n);
	for (i = 0; i < n - 1; i++)
	{
		if ((*separator))
		{
			printf("%d%s", va_arg(ap, int), separator);
		}
	}
	printf("%d", va_arg(ap, int));
	va_end(ap);
	printf("\n");
}
