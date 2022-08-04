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
	for (i = 0; i < n; i++)
	{
		if (&va_arg(ap, char *) == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", va_arg(ap, char *));
		}
		if (i != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(ap);
}
