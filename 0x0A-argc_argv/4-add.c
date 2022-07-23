#include <stdio.h>
/**
 * main - the stating point
 * @argc: the argument count
 * @argv: the strings passed from command line
 * Return: Always 0  on success
 */
int main(int argc, char *argv[])
{
	int result, i, j;

	result = 0;
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		result = result + argv[i];
		
	}
	printf("%d\n", result);
	return (0);
}
