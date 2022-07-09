#include <stdio.h>
/**
 * main - prints first 50 finabocci numbers
 * Return: Alwayss 0
 */
int main(void)
{
	long int a, b, c, i, sum;

	a = 1;
	b = 2;
	sum = 2;

	for (i = 3; i <= 48; i++)
	{
		c = a + b;
		if (c <= 4000000)
		{
			if (i % 2 == 0)
			{
				sum = sum + i;
			}
		}
		else
		{
			break;
		}
		a = b;
		b = c;
	}
	printf("%ld, ", sum);
	printf("\n");
	return (0);
}
