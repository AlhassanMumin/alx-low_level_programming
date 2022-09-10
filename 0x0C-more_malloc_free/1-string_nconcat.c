#include <string.h>
#include <stdlib.h>
/**
 * string_nconcat - It concatenate strings
 * @s1: the first string
 * @s2: the second string
 * @n: the bytes to copy from string s2
 * Return: pointer to the newly allocataeed memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len = 0, i;
	char *str_ncpy;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[len])
		len++;
	str_ncpy = malloc(sizeof(char) * len + sizeof(char) * n + 2);
	if (str_ncpy == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i]; i++)
	{
		str_ncpy[i] = s1[i];
	}
	for (i = 0; s2[i] && i < n; i++)
	{
		str_ncpy[len++] = s2[i];
	}
	str_ncpy[len] = '\0';
	return (str_ncpy);
}

