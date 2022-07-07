#include "main.h"
/**
 * times_table - This will print times table from 0 to 9
 */
void times_table(void)
{
	int count, multiplier, result;

	for (count = 0; count <= 9; count++)
	{
		_putchar('0');

		for (multiplier = 1; multiplier <= 9; multiplier++)
		{
			_putchar(',');
			_putchar(' ');

			result = count * multiplier;

			if (result <= 9)
			{
				_putchar(' ');
			}
			else
			{
				_putchar((result / 10) + '0');
			}
			_putchar((result % 10) + '0');
		}
		_putchar('\n');
	}
}
