#include <string.h>
/**
 * _strcmp - The func compares two strings
 *
 * @s1: The value to be compared to
 * @s2: The value to compare to
 *
 * Return: positive value if  s1 is higheter than s2
 * 	   0 if s1 and s2 are same
 * 	   negative value if s2 is higher than s1
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
