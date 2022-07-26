#include <stdlib.h>
#include <string.h>
/**
 * str_concat - it will concatenate two stinrgs
 * @s1: the destination string
 * @s2: the source string
 * Return:returns the pointer to a newly allocated space in memory
 */
char *str_concat(char *s1, char *s2)
{	char *concat;

	if (s1 == NULL)
		s1 = "";
	else if (s2 == NULL)
		s2 = "";
	concat = (char *)malloc(sizeof(char) * strlen(s1) + sizeof(char) * strlen(s2));
	if (concat == NULL)
	{
		return (NULL);
	}
	strcat(concat, s1);
	strcat(concat, s2);
	return (concat);
}
