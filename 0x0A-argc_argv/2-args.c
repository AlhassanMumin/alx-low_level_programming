#include <stdio.h>
/**
 * main - the stating point
 * @argc: the argument count
 * @argv: the strings passed from command line
 * Return: Always 0  on success
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
	printf("%s\n", argv[i]);
	}
	return (0);
}
