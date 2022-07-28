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
	unsigned int len, i;
	char *str_ncpy;

	len = strlen(s1);
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	str_ncpy = malloc(sizeof(char) * (len + 1 + n));
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
	str_ncpy[len + 1] = '\0';
	return (str_ncpy);
	free(str_ncpy);
}

