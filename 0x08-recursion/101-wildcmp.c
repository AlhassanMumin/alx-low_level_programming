#include <string.h>
/**
 * wildcmp - it will compare two strings
 * @s1: the first string
 * @s2: the second string
 * Return: 1 if s1 is greater
 * 	   0 if s1 and s2 are same
 * 	   -1 if s2 is greater
 */
int wildcmp(char *s1, char *s2)
{
	if (strcmp(s1, s2) == 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (strcmp(s1, s2));
}
