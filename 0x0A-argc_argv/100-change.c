#include <stdlib.h>
#include <stdio.h>
/**
 * main - The entry or starting point of  the program
 * @argc: the argument count variable
 * @argv: the argrment vector
 * Return: always 0
 */
int main(int  argc, char *argv[])
{
	int count, bal, div;

	count = 0,
	bal = atoi(argv[1]);
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	while (bal > 0)
	{
		if (bal >= 25)
		{
			div = bal / 25;
			bal = bal - div * 25;
			count = count + div;
		}
		if (bal >= 10)
		{
			div = bal / 10;
			bal = bal - div * 10;
			count = count + div;
		}
		if (bal >= 5)
		{
			div = bal / 5;
			bal = bal - div * 5;
			count = count + div;
		}
		if (bal >= 2)
		{
			div = bal / 2;
			bal = bal - div * 2;
			count = count + div;
		}
		if (bal <= 1)
		{
			count = count + bal;
			bal = bal - bal;
		}
	}
	printf("%d\n", count);
	return (0);
}
