#include <stdio.h>
/**
 * main - prints first 50 finabocci numbers
 * Return: Alwayss 0
 */
int main(void)
{
	long int a, b, c, i;

	a = 1;
	b = 2;
	printf("%ld, %ld, ", a, b);

	for (i = 1; i <= 48; i++)
	{
		c = a + b;
		if (i < 48)
		{
			printf("%ld, ", c);
		}
		else
		{
			printf("%ld", c);
		}
		a = b;
		b = c;
	}
	printf("\n");
	return (0);
}
