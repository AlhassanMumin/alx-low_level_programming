#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/***
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char upper_case;
	char lower_case;
	char nl = '\n';

	for (lower_case = 'a'; lower_case <= 'z'; lower_case++)
	{
		putchar(lower_case);
	}
	for (upper_case = 'A'; upper_case <= 'Z'; upper_case++)
	{
		putchar(upper_case);
	}
	putchar(nl);

	return (0);
}
