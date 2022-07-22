#include <stdlib.h>
#include <stdio.h>
/**
 * main - the stating point
 * @argc: the argument count
 * @argv: the strings passed from command line
 * Return: Always 0  on success
 */
int main(int argc, char *argv[])
{
	if (argc == 3)
	{
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	}
	else
	{
		printf("Errro\n");
		return (1);
	}
	return (0);
}
