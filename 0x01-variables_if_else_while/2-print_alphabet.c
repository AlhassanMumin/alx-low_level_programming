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
	int lower_case;
	char nl = '\n';

	for (lower_case = 0; lower_case < 26; lower_case++)
	{
		putchar(lower_case + 'a');
	}
	putchar(nl);

	return (0);
}
