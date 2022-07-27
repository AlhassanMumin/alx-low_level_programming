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
	int result, i;

	result = 1;
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	for (i = 1; i < argc; i++)
	{
		result *= atoi(argv[i]);
	}
	printf("%d\n", result);
	return (0);
}
