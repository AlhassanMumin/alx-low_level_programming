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
	int len;
	len = strcmp(s1, s2);
	if (len == 0)
	{
		len = 0;
	}
	else
	{
		len = 1;
	}
	return len;
}
