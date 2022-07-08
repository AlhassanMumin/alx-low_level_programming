#include <stdio.h>
/**
 * main - Prints the numbers from 1-100, but for multiples of three,
 *        Fizz is printed instead of the number, for multiples of five,
 *        Buzz, and for multiples of both three and five, FizzBuzz.
 *
 * Return: Always 0.
 */
int main(void)
{
	int val;

	for (val = 1; val <= 100; val++)
	{
		if (val % 15 == 0)
			printf("FizzBuzz");

		else if ((val % 3) == 0 && val % 15 != 0)
			printf("Fizz");

		else if ((val % 5) == 0 && val % 15 != 0)
			printf("Buzz");

		else
			printf("%d", val);

		if (val == 100)
			continue;
		printf(" ");
	}

	printf("\n");

	return (0);
}
