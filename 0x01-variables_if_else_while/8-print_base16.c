#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int val;
	char lower_case;

	for (val = '0'; val <= '9'; val++)
		putchar(val);
	for (lower_case = 'a'; lower_case <= 'f'; lower_case++)
		putchar(lower_case);
	putchar('\n');

	return (0);
}
