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
			_putchar('0');
			_putchar(',');
			_putchar(' ');  
			_putchar(' '); ;

			for (j = 1; j <= n; j++)
			{
				_putchar(',');
				_putchar(' ');

				k = i*j;

				if (k <= 99)
  				{
					_putchar(' ');
				}
				if (k <= 9)
				{
					_putchar(' ');
				}

				if (k >= 100)
				{
					_putchar((k / 100) + '0');
					_putchar(((k / 10)) % 10 + '0');
				}
				else if (k <= 99 && k >= 10)
				{
					_putchar((k / 10) + '0');
				}
				_putchar((k % 10) + '0');
			}
			_putchar('\n');
		}
	}
}

