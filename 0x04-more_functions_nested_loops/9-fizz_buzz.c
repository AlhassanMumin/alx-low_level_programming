#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 * Return: 0 on success
 */
int main(void)
{
	int i;

	for (i = 0; i <= 100; i++)
	{

		if ((i % 15) == 0)
		{
			_putchar('F');
			_putchar('i');
			_putchar('z');
			_putchar('z');
			_putchar('B');
			_putchar('u');
			_putchar('z');
			_putchar('z');
		}
		else if (i % 5 == 0 && i % 15 != 0)
		{
			_putchar('B');
			_putchar('u');
			_putchar('z');
			_putchar('z');
		}
		else if (i % 3 == 0 && i % 15 != 0)
		{
			_putchar('F');
			_putchar('i');
			_putchar('z');
			_putchar('z');
		}
		else
		{
			_putchar(i);
		}
	}
	return (0);
}

