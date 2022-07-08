#include <math.h>
#include "main.h"
/**
 * print_times_table - print the times table
 * @n: the value based on which a times table will be printed
 */
void print_times_table(int n)
{
	int i, j, div;

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
				div = floor((i*j / 10))
				if (div > 9)
				{
					while (div > 9)
					{
						_putchar((floor(div / 10)) + '0');
						div = div / div
					}
					_putchar(',');
					_putchar(' ');  
					_putchar(' ');
					_putchar(' ');
				}
				else
				{
					_putchar(div + '0');
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

