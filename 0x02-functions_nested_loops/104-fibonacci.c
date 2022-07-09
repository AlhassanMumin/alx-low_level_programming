#include <stdio.h>
/**
 * main - prints first 50 finabocci numbers
 * Return: Alwayss 0
 */
int main(void)
{
	unsigned long a, b, c, i;

	a = 1;
	b = 2;
	printf("%lu, %lu, ", a, b);

	for (i = 1; i <= 96; i++)
	{
		c = a + b;
		if (i < 96)
		{
			printf("%lu, ", c);
		}
		else
		{
			printf("%lu", c);
		}
		a = b;
		b = c;
	}
	printf("\n");
	return (0);
}
