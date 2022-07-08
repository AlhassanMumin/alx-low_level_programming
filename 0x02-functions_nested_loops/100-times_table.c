#include <math.h>
#include "main.h"
/**
 * print_times_table - print the times table
 * @n: the value based on which a times table will be printed
 */
void print_times_table(int n)
{
	int i, j, k;

	if (0 <= n && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar(0 + '0');
			_putchar(',');
			_putchar(' ');  
			_putchar(' ');
			_putchar(' ');

			for (j = 1; j <= n; j++)
			{
				if (i*j > 9)
				{
					_putchar((floor(i*j / 10)) + '0');
					_putchar((i*j % 10) + '0');
				}
				else if (i*j > 99)
				{
					_putchar((floor(i*j / 10)) + '0');
					k = floor(i*j / 10);
					_putchar((floor(i*j / 10)) + '0');
					_putchar((i*j % 10) + '0');
					
				else
				{
					_putchar(i*j + '0');
				}
				if (j < n)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}

