#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int d, e, f;

	for (d = '0'; d <= '7'; d++)
	{
		for (e = '1'; e <= '8'; e++)
		{
			if (e > d)
			{
				for (f = '2'; f <= '9'; f++)
				{

					if (f > e)
					{
						putchar(d);
						putchar(e);
						putchar(f);

						if (d != '7')
						{
							putchar(',');
							putchar(' ');
						}
					}
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
