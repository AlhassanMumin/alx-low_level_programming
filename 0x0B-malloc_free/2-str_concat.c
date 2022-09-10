#include <stdlib.h>
#include <string.h>
/**
 * str_concat - it will concatenate two stinrgs
 * @s1: the destination string
 * @s2: the source string
 * Return:returns the pointer to a newly allocated space in memory
 */
char *str_concat(char *s1, char *s2)
{
	int s1len = 0, s2len = 0, i;
	char *concat;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[s1len])
		s1len++;

	while (s1[s2len])
		s2len++;


	concat = malloc(sizeof(char) * s1len + sizeof(char) * s2len + 22);

	if (concat == NULL)
		return (NULL);

	for (i = 0; i < s1len; i++)
		concat[i] = s1[i];

	for (i = 0; s2[i]; i++, s1len++)
		concat[s1len] =  s2[i];

	return (concat);
}
