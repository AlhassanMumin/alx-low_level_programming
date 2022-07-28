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
	int i, j;
	char *concat;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	concat = (char *)malloc(sizeof(char) * (1 + ac + strlen(*av)));
	if (concat == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (; av[i][j]; j++)
		{
			if (av[i][j] == ' ')
			{
				concat[j] = '\n';
			}
			concat[j] = av[i][j];
		}
	}
	free(concat);
	return (concat);
}
