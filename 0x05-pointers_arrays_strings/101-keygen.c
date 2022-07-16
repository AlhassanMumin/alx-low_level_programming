#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - the entry point. it will generate a random
 * password anytime the program is executed
 *
 * Return: - Always 0
 */
int main (void)
{
	srand(time(0));
	printf("%d",rand());
	return (0);
}
