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
	int count, bal, div, money;

	count = 0,
	money = atoi(argv[1]);
	bal = money;
	if (argc == 2 && money > 0)
	{
		while (bal)
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
	}
	else if (money < 0)
	{
		printf("%d\n", count);
	}
	else if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", count);
	return (0);
}

