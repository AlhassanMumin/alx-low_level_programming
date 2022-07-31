#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * argstostr - It concatenate all the arguments
 * @ac: the number of argument passed in
 * @av: the argument vector
 * Return: pinter to the new string or NULL if failure
 */
char *argstostr(int ac, char **av)
{
	int i, j, k;
	char *concat;

	k = 0;
	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	concat = malloc(sizeof(char *));
	if (concat == NULL)
	{
		return (NULL);
	}
	for (i = 1; i < ac; i++)
	{
		for (j = 0; strlen(av[i]); j++)
		{
			concat[k] = av[i][j];
			k++;
		}
		_putchar('\n');
	}
	return (concat);
}
